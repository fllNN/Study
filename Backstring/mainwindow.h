#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QObject>
#include <QQmlContext>
#include <QVariant>

class Mainwindow : public QObject {
    Q_OBJECT

public:
    Q_INVOKABLE void nFunctionC(const QString &str1);
    explicit Mainwindow(QObject *parent = nullptr);

signals:

};

#endif // MAINWINDOW_H
