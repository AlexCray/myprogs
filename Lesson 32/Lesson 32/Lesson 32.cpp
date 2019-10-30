#include <iostream>
#include <cstdint>

int main()
{
    std::int8_t myint = 65;
    std::cout << myint << std::endl; // выводится "A", так как компилятор обработал int8_t как char signed => не использовать std::int8_t и std::uint8_t вообще
    
    return 0;
}