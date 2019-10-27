#include <iostream>

int getIntegerFromUser()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;
    return x;
}

int doubleNumber()
{
    return getIntegerFromUser() * 2;
}

int main()
{
    std::cout << "This program calculates doubled value of your integer number!" << std::endl;
    std::cout << "Doubled value of your integer: " << doubleNumber() << std::endl;
    return 0;
}