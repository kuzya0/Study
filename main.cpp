#include <iostream>
#include "config.h"

int main(int, char**) {
    std::cout << "version " << PROJ_BUILD_NUMBER << std::endl;
    std::cout << "Hello, world!\n";
}
