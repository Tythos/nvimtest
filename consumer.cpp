#include <iostream>
#include "./test.cpp"

int main(int nArgs, char** vArgs) {
    auto n = getName();
    std::cout << n.c_str() << std::endl;
    for (auto itr : n) {
        std::cout << itr << std::endl;
    }
    return 0;
}