#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "jokerequest.h"
#include "audiorecorder.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);
    qmlRegisterType<JokeRequest>("com.mbrdna.joke", 1, 0, "JokeRequest");
    qmlRegisterType<AudioRecorder>("com.mbrdna.audio.record", 1, 0, "AudioRecorder");
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
