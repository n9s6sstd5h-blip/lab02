#include <iostream>
#include <string>

int main()
{
    // Переменная для хранения имени пользователя.
    std::string name;

    // Запрашиваем имя и печатаем персональное приветствие.
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
