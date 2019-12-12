#include <iostream>
#include <random> // для std::random_device и std::uniform_int_distribution

int getRandomInteger(int min, int max)
{
    std::random_device rd;
    std::uniform_int_distribution<int> uid(min, max);

    return uid(rd);
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