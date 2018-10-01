#include "jokerequest.h"

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

