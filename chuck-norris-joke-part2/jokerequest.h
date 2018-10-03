#ifndef JOKEREQUEST_H
#define JOKEREQUEST_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include "HoundServerJSON.h"
#include "HoundCloudRequester.h"

class JokeRequest : public QObject
{
    Q_OBJECT
public:
    explicit JokeRequest(QObject *parent = nullptr);
    Q_INVOKABLE void makeHoundifyTextRequest(QString request);
    Q_INVOKABLE void makeHoundifyVoiceRequest(QString filename);

signals:
    void serverResponse(QString response);

public slots:
    void readReady(QNetworkReply *reply);

private:
    QNetworkAccessManager *mNetMan;
    HoundCloudRequester* mRequester;
    void makeJokeRequest();
    RequestInfoJSON* getRequestInfo();
    void sendResponse(HoundServerJSON *hound_result);
};

#endif // JOKEREQUEST_H
