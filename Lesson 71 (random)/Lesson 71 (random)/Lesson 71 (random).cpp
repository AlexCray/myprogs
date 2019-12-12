#include <iostream>
#include <random> // для std::random_device и std::mt19937

int main()
{
    std::random_device rd;
    std::mt19937_64 mersenne(rd()); // инициализируем Вихрь Мерсенна случайным стартовым числом 


    int n, rows;
    long long min, max;
    std::cout << "How many number: ";
    std::cin >> n;

    std::cout << "How many rows: ";
    std::cin >> rows;

    std::cout << "Enter min namber: ";
    std::cin >> min;

    std::cout << "Enter max namber: ";
    std::cin >> max;

    std::cout << "\n" << "Results: " << "\n" << "\n";


    unsigned long long g{ 18446744073709551615 };
    for (int count = 0; count < n; ++count)
    {
        static const long double fraction = 1.0 / (static_cast<long double>(g + 1.0));
        std::cout << static_cast<unsigned long long>(mersenne() * fraction * (max - min + 1) + min) << "\t";

        if ((count + 1) % rows == 0)
            std::cout << "\n";
    }

    return 0;
}