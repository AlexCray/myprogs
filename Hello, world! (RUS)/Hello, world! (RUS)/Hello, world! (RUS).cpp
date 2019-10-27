#include<iostream>
#include<Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Здравствуй, мир!" << std::endl;
	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cin.get();
	return 0;
}