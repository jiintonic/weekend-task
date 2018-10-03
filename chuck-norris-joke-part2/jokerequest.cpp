#include "jokerequest.h"

extern "C"
  {
#define class CLASS
#include "driver.h"
#undef class
  }

const QUrl CHUCK_NORRIS_JOKE_URL("http://api.icndb.com/jokes/random");
const static char *CLIENT_ID = "A2NW6wMWD8bGaokOs-5gUw==",
        *CLIENT_KEY = "KQnlhjoP50EX535E2rXSfuHMXhjjVA1i_YPuZOYGPKomBsZ9pPrXm5psK-2K6c8Gti1i4EztLPRtO-xTCcxTgg==",
        *USER_ID = "user1",
        *TEXT_REQUEST_URL_BASE = "https://api.houndify.com/v1/text",
        *VOICE_REQUEST_URL_BASE = "https://api.houndify.com/v1/audio",
        *JOKE_INTENTION = "JOKE.ChuckNorris",
        *ERROR_MESSAGE = "Error has occurred. Please try again";

JokeRequest::JokeRequest(QObject *parent)
    : QObject(parent)
    , mNetMan(new QNetworkAccessManager(this))
{
    mRequester = new HoundCloudRequester(CLIENT_ID, CLIENT_KEY, USER_ID,
                                            TEXT_REQUEST_URL_BASE, VOICE_REQUEST_URL_BASE);
    connect(mNetMan, SIGNAL(finished(QNetworkReply*)), this, SLOT(readReady(QNetworkReply*)));
}

void JokeRequest::makeJokeRequest()
{
    mNetMan->get(QNetworkRequest(CHUCK_NORRIS_JOKE_URL));
}

void JokeRequest::makeHoundifyRequest(QString line)
{
    init_salmoneye();
    RequestInfoJSON *request_info = new RequestInfoJSON();
    char session_id[41];
    for (size_t num = 0; num < 10; ++num)
      {
        char bits[3];
        bits[0] = static_cast<char>(rand());
        bits[1] = static_cast<char>(rand());
        bits[2] = static_cast<char>(rand());
        base64url_encode_three(&(session_id[num * 4]), &(bits[0]));
      }
    session_id[40] = 0;
    char request_id[41];
    for (size_t num = 0; num < 10; ++num)
      {
        char bits[3];
        bits[0] = static_cast<char>(rand());
        bits[1] = static_cast<char>(rand());
        bits[2] = static_cast<char>(rand());
        base64url_encode_three(&(request_id[num * 4]), &(bits[0]));
      }
    request_id[40] = 0;
    request_info->setRequestID(request_id);
    request_info->setSessionID(session_id);

    HoundServerJSON *hound_result = mRequester->do_text_request(line.toStdString().c_str(), nullptr, request_info, nullptr);
    if(hound_result != nullptr && hound_result->hasAllResults()){
        CommandResultJSON *command = hound_result->elementOfAllResults(0);
        const char* soundHoundRespond = command->getWrittenResponse().c_str();
        if(std::strcmp(command->getWrittenResponse().c_str(), JOKE_INTENTION) == 0){
            makeJokeRequest();
        } else{
          emit serverResponse(soundHoundRespond);
        }

    } else{
        emit serverResponse(ERROR_MESSAGE);
    }
    cleanup_salmoneye();
}

void JokeRequest::readReady(QNetworkReply* reply){
    if (reply->error() != QNetworkReply::NoError){
        emit serverResponse(ERROR_MESSAGE);
        reply->deleteLater();
        return;
    }

    QByteArray data = reply->readAll();
    QJsonObject jsonObject= QJsonDocument::fromJson(data).object();
    if(jsonObject["type"].toString() == "success"){
        QJsonObject innerObject = jsonObject["value"].toObject();
        QString joke = innerObject["joke"].toString();
        emit serverResponse(joke);
    } else{
        emit serverResponse(ERROR_MESSAGE);
    }

    reply->deleteLater();
}

