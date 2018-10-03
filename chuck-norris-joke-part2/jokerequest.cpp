#include "jokerequest.h"
#include "HoundCloudRequester.h"

extern "C"
  {
#define class CLASS
#include "driver.h"
#undef class
  }

const QUrl CHUCK_NORRIS_JOKE_URL("http://api.icndb.com/jokes/random");

JokeRequest::JokeRequest(QObject *parent)
    : QObject(parent)
    , mNetMan(new QNetworkAccessManager(this))
{
    connect(mNetMan, SIGNAL(finished(QNetworkReply*)), this, SLOT(readReady(QNetworkReply*)));
}

void JokeRequest::makeRequest()
{
    mNetMan->get(QNetworkRequest(CHUCK_NORRIS_JOKE_URL));
}

QString JokeRequest::makeHoundifyRequest()
{
    const char* client_id = "A2NW6wMWD8bGaokOs-5gUw==",
            *client_key = "KQnlhjoP50EX535E2rXSfuHMXhjjVA1i_YPuZOYGPKomBsZ9pPrXm5psK-2K6c8Gti1i4EztLPRtO-xTCcxTgg==",
            *user_id = "user1",
            *text_request_url_base = "https://api.houndify.com/v1/text",
            *voice_request_url_base = "https://api.houndify.com/v1/audio",
            *line = "Tell me a chuck norris joke";
    init_salmoneye();
    HoundCloudRequester *requester = new HoundCloudRequester(client_id, client_key, user_id,
            text_request_url_base, voice_request_url_base);
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

    HoundServerJSON *hound_result = requester->do_text_request(line, nullptr, request_info, nullptr);
    if(hound_result != nullptr && hound_result->hasAllResults()){
        CommandResultJSON *command = hound_result->elementOfAllResults(0);
    }
    cleanup_salmoneye();
    return "success";
}

void JokeRequest::readReady(QNetworkReply* reply){
    QString error = "Error has occurred. Please try again";
    if (reply->error() != QNetworkReply::NoError){
        emit jokeReadReady(error);
        reply->deleteLater();
        return;
    }

    QByteArray data = reply->readAll();
    QJsonObject jsonObject= QJsonDocument::fromJson(data).object();
    if(jsonObject["type"].toString() == "success"){
        QJsonObject innerObject = jsonObject["value"].toObject();
        QString joke = innerObject["joke"].toString();
        emit jokeReadReady(joke);
    } else{
        emit jokeReadReady(error);
    }

    reply->deleteLater();
}

