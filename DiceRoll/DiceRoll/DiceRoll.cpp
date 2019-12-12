#include <iostream>
#include <random> // для std::random_device и std::mt19937

int getRandomInteger(long long min, long long max)
{
    std::random_device rd;
    std::mt19937_64 mersenne(rd()); // инициализируем Вихрь Мерсенна случайным стартовым числом 

    unsigned long long g{ 18446744073709551615 };
    static const long double fraction = 1.0 / (static_cast<long double>(g + 1.0));
        
    return static_cast<int>(mersenne() * fraction * (max - min + 1) + min);
}

int main()
{
    std::cout << getRandomInteger(1, 6) << '\n';

    return 0;
}