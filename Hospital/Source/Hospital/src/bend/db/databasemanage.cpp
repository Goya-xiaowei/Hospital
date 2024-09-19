#include "databasemanage.h"

#include <mutex>


DatabaseManage* DatabaseManage::m_instance = nullptr;

DatabaseManage::DatabaseManage()
{

    m_database = QSqlDatabase::addDatabase("QMYSQL");
    m_database.setHostName("192.168.2.110");
    m_database.setDatabaseName("hospital_manage");
    m_database.setPort(3306);
    m_database.setUserName("root");
    m_database.setPassword("root");
    // m_database = QSqlDatabase::addDatabase("QSQLITE");
    // m_database.setDatabaseName("hospital.db");
    if (!m_database.open()) {
        qDebug() << "Error opening database:" << m_database.lastError().text();
    }
}
DatabaseManage::~DatabaseManage()
{
    m_database.close();
}
DatabaseManage *DatabaseManage::instance()
{
    // QMutexLocker locker(&mutex);

    if(m_instance == nullptr)
    {
        m_instance = new DatabaseManage;
    }
    return m_instance;
}

QSqlDatabase &DatabaseManage::database()
{
    return m_database;
}
