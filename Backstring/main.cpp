#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <mainwindow.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/Backstring/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    QObject* root = engine.rootObjects()[0];

     Mainwindow *handlerSignals= new Mainwindow(root);

     QObject::connect(root, SIGNAL(funcSignal(QString)),
     handlerSignals, SLOT(nFunctionC(QString)));

    return app.exec();
}
