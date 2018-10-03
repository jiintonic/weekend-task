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

class JokeRequest : public QObject
{
    Q_OBJECT
public:
    explicit JokeRequest(QObject *parent = nullptr);
    Q_INVOKABLE void makeRequest();
    Q_INVOKABLE QString makeHoundifyRequest();

signals:
    void jokeReadReady(QString joke);

public slots:
    void readReady(QNetworkReply *reply);

private:
    QNetworkAccessManager *mNetMan;
    void show_diagnostics(CommandResultJSON *command);
};

#endif // JOKEREQUEST_H
