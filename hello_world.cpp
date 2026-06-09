#include <iostream>
#include <string>

int main()
{
    // Store the user name read from standard input.
    std::string name;

    // Ask for a name and print a personalized greeting.
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
