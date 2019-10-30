#include <iostream>

// запрашивает в пользователя целое число, а затем возвращает его в main()
int readNumber()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;
    return x;
}

// выводит результат на экран
void writeAnswer(int x)
{
    std::cout << "The answer is " << x << std::endl;
}