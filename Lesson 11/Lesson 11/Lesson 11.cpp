#include <iostream>

int main()
{
	//просим пользователя ввести любое число
	std::cout << "Enter a number: ";

	int a = 0;
	
	//получаем пользовательское число и сохраняем его в переменную a
	std::cin >> a;

	std::cout << "You entered " << a << std::endl;
	return 0;
}