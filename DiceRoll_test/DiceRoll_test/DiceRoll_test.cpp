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
    static int freq1{}, freq2{}, freq3{}, freq4{}, freq5{}, freq6{};
    
    for (int i = 0; i < 1000000; i++)
    {
        switch (getRandomInteger(1, 6))
        {
            case(1):
                freq1++;
                break;
            case(2):
                freq2++;
                break;
            case(3):
                freq3++;
                break;
            case(4):
                freq4++;
                break;
            case(5):
                freq5++;
                break;
            case(6):
                freq6++;
                break;
        }
    }

    std::cout << freq1 << '\n' << freq2 << '\n' << freq3 << '\n' << freq4 << '\n'
        << freq5 << '\n' << freq6 << '\n';

    return 0;
}