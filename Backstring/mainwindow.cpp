#include "mainwindow.h"
#include <QDebug>
#include <QTextStream>

Mainwindow::Mainwindow(QObject *parent)
    : QObject{parent} {
}

void Mainwindow::nFunctionC(const QString &msg) {

    QObject* textinput = this->parent()->findChild<QObject*>("textinput");

    QObject* memo = this->parent()->findChild<QObject*>("memo");

    QString str1 = (textinput->property("text")).toString();
//    std::string str1;
    QString str2;

    for(int i=str1.length()-1; i>=0; i--) {
        str2 = str2 + str1[i];
    }

    memo->setProperty("text", str2 + msg);

}
