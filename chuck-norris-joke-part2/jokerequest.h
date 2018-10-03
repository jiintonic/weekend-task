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
    Q_INVOKABLE void makeHoundifyRequest(QString request);

signals:
    void serverResponse(QString response);

public slots:
    void readReady(QNetworkReply *reply);

private:
    QNetworkAccessManager *mNetMan;
    HoundCloudRequester* mRequester;
    void makeJokeRequest();
};

#endif // JOKEREQUEST_H
