#include <iostream>

double getDouble()
{
    std::cout << "Enter a double value: ";
    double x;
    std::cin >> x;
    return x;
}

void mathResult(double x, double y)
{
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char c;
    std::cin >> c;
    if (c == '+') 
        std::cout << (x + y) << std::endl;
    if (c == '-')
        std::cout << (x - y) << std::endl;
    if (c == '*')
        std::cout << (x * y) << std::endl;
    if (c == '/')
        std::cout << (x / y) << std::endl;
}

int main()
{
    double x{ getDouble() }, y{ getDouble() };
    mathResult(x, y);
    return 0;
}