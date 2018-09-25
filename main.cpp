#include <iostream>
#include "Hello.h"

int main() {
    Hello defaultHello;
    Hello helloWithName("world");
    std::cout << defaultHello.getMessage() << std::endl;
    std::cout << helloWithName.getMessage() << std::endl;
    return 0;
}