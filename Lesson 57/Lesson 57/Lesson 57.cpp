#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";
    std::string fullName;
    std::getline(std::cin, fullName); // извлекаем целую строку из входного потока в переменную fullName

    std::cout << "Enter your age: ";
    int age; // переменная age должна быть типа int, а не типа string, чтобы мы могли проводить с ней арифметические операции
    std::cin >> age;

    int letters = fullName.length(); // вычисляем длину переменной fullHame (учитывая пробелы)
    double yearsPerLetter = static_cast<double>(age) / letters; // используем оператор static_cast, чтобы изменить тип переменной age на double, дабы сохранить дробную часть при целочисленном делении
    std::cout << "You've lived " << yearsPerLetter << " years for each letter in your hame.\n";

    return 0;
}