#pragma once
#pragma once
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>

static void connexionBD()
{
    QSqlDatabase conn = QSqlDatabase::addDatabase("QMYSQL");
    conn.setHostName("127.0.0.1");
    conn.setUserName("root");
    conn.setDatabaseName("gestion_stock");
    conn.setPort(3306);
    conn.setPassword("");

    if (conn.open())
    {
        qDebug() << "ON";
    }
    else
    {
        qDebug() << "Off";
    }
}