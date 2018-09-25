#include "Hello.h"

Hello::Hello(const string &username) {
    this->username = username;
}

Hello::Hello() {
    this->username = DEFAULT_USERNAME;
}

 string Hello::getMessage() {
 return "Hello, " + username;
}