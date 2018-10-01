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

class JokeRequest : public QObject
{
    Q_OBJECT
public:
    explicit JokeRequest(QObject *parent = nullptr);
    Q_INVOKABLE void makeRequest();

signals:
    void jokeReadReady(QString joke);

public slots:
    void readReady(QNetworkReply *reply);

private:
    QNetworkAccessManager *mNetMan;
};

#endif // JOKEREQUEST_H
