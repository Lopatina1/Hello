#include <iostream>
#include "../Hello.h"

static const char *const EXPECTED_MESSAGE_WITH_NAME = "Hello, Ann";
static const char *const EXPECTED_MESSAGE_WITH_NAME = "Hello, world";

int main() {
    Hello defaultHello;
    Hello withName("world");
    if (EXPECTED_DEFAULT_MESSAGE == defaultHello.getMessage() && EXPECTED_MESSAGE_WITH_NAME == withName.getMessage()) {
        cout << "Test passed" << endl;
        return 0;
    } else {
        cout << "Test failed" << endl;
        return 1;
    }
}