#include <iostream>

int getSingleDigitInteger()
{
    std::cout << "Enter a single digit integer: ";
    int x;
    std::cin >> x;
    return x;
}

bool isPrime(int x)
{
    if (x == 2 || x == 3 || x == 5 || x == 7)
        return true;
    return false;
}

int main()
{
    int x{ getSingleDigitInteger() };
    
    bool prime = isPrime(x);

    if (prime)
        std::cout << "The digit is prime" << std::endl;
    else
        std::cout << "The digit is not prime" << std::endl;

    return 0;
}