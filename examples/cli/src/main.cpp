#include <hello.hpp>
#include <iostream>

int main()
{

    using namespace hello;

    std::string value = greeting();
    std::cout << value << std::endl;

    return 0;
}