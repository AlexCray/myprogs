#include <iostream>

int add(int x, int y); // это нужно для того, чтобы main.cpp знал, что функция add() определена в другом месте
int getInteger();      // это нужно для того, чтобы main.cpp знал, что функция getInteger() определена в другом месте 

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl;
    int x = getInteger();
    int y = getInteger();
    std::cout << x << " + " << y << " is " << x + y << '\n';
    return 0;
}