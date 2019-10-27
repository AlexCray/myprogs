#include <iostream>

int add(int x, int y); // предварительное объявление функции add() (используется её прототип)

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl; // это работает из-за того, что мы предварительно объявили функцию add() выше
    return 0;
}

int add(int x, int y) // хотя её определение находится ниже её вызова
{
    return x + y;
}