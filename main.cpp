#include <iostream>
#include <string>

int main(void)
{
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello " + name + ". Nice to meet you.\n";
}
