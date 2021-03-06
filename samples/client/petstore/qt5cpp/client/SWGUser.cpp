/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include "SWGUser.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUser::SWGUser(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUser::SWGUser() {
    init();
}

SWGUser::~SWGUser() {
    this->cleanup();
}

void
SWGUser::init() {
    id = 0L;
username = new QString("");
firstName = new QString("");
lastName = new QString("");
email = new QString("");
password = new QString("");
phone = new QString("");
userStatus = 0;
}

void
SWGUser::cleanup() {
    
if(username != NULL) {
        delete username;
    }
if(firstName != NULL) {
        delete firstName;
    }
if(lastName != NULL) {
        delete lastName;
    }
if(email != NULL) {
        delete email;
    }
if(password != NULL) {
        delete password;
    }
if(phone != NULL) {
        delete phone;
    }

}

SWGUser*
SWGUser::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUser::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint64", "");
setValue(&username, pJson["username"], "QString", "QString");
setValue(&firstName, pJson["firstName"], "QString", "QString");
setValue(&lastName, pJson["lastName"], "QString", "QString");
setValue(&email, pJson["email"], "QString", "QString");
setValue(&password, pJson["password"], "QString", "QString");
setValue(&phone, pJson["phone"], "QString", "QString");
setValue(&userStatus, pJson["userStatus"], "qint32", "");
}

QString
SWGUser::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUser::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));

    
    toJsonValue(QString("username"), username, obj, QString("QString"));
    
        

    
    toJsonValue(QString("firstName"), firstName, obj, QString("QString"));
    
        

    
    toJsonValue(QString("lastName"), lastName, obj, QString("QString"));
    
        

    
    toJsonValue(QString("email"), email, obj, QString("QString"));
    
        

    
    toJsonValue(QString("password"), password, obj, QString("QString"));
    
        

    
    toJsonValue(QString("phone"), phone, obj, QString("QString"));
    
        
obj->insert("userStatus", QJsonValue(userStatus));

    return obj;
}

qint64
SWGUser::getId() {
    return id;
}
void
SWGUser::setId(qint64 id) {
    this->id = id;
}

QString*
SWGUser::getUsername() {
    return username;
}
void
SWGUser::setUsername(QString* username) {
    this->username = username;
}

QString*
SWGUser::getFirstName() {
    return firstName;
}
void
SWGUser::setFirstName(QString* firstName) {
    this->firstName = firstName;
}

QString*
SWGUser::getLastName() {
    return lastName;
}
void
SWGUser::setLastName(QString* lastName) {
    this->lastName = lastName;
}

QString*
SWGUser::getEmail() {
    return email;
}
void
SWGUser::setEmail(QString* email) {
    this->email = email;
}

QString*
SWGUser::getPassword() {
    return password;
}
void
SWGUser::setPassword(QString* password) {
    this->password = password;
}

QString*
SWGUser::getPhone() {
    return phone;
}
void
SWGUser::setPhone(QString* phone) {
    this->phone = phone;
}

qint32
SWGUser::getUserStatus() {
    return userStatus;
}
void
SWGUser::setUserStatus(qint32 userStatus) {
    this->userStatus = userStatus;
}



} /* namespace Swagger */

