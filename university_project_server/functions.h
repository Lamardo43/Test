#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <QString>
#include <QByteArray>
#include <QMap>
#include <QStringList>
#include "md5.h"

/// \brief log_in отвечавет за вход в систему
/// \param QString username, QString password
/// \return QByteArray response
///
QByteArray log_in(QString login, QString password);

/// \brief log_out отвечавет за выход из систему
/// \param void
/// \return QByteArray response
///
QByteArray log_out();

/// \brief change_role отвечавет за изменение роли
/// \param QString username, QString new_role
/// \return QByteArray response
///
QByteArray change_role(QString username, QString new_role);

/// \brief change_pass отвечавет за изменение пароля
/// \param QString old_pass, QString new_pass1,  QString new_pass2
/// \return QByteArray response
///
QByteArray change_pass(QString login, QString new_pass);

/// \brief add_user отвечавет за добавление пользователя
/// \param QString username, QString new_role
/// \return QByteArray response
///
QByteArray add_user(QString username, QString pass, int new_role);

/// \brief show_pass отвечавет за показ пароля
/// \param QString account
/// \return QByteArray response
///
QByteArray show_pass(QString account);

/// \brief invalidRequest возвращает предупреждение, если введён неверный запрос
/// \param QString account
/// \return QByteArray response
QByteArray invalidRequest();

///
/// \brief parse получает сообщение пользователя и вызывает соответствующую функцию
/// \param void
/// \return QByteArray response
///
QByteArray parse(QString message);
#endif // FUNCTIONS_H

