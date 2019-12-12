#include <iostream> // для std::cout
#include <random> // для std::random_device и std::uniform_int_distribution
#include <cstdlib> // для system("cls");
#include <string> // для std::getline

using namespace std;

int getRandomInteger(int min, int max)
{
    random_device rd;
    uniform_int_distribution<int> uid(min, max);

    return uid(rd);
}

int main()
{
    string choice;

    do
    {
        system("cls");
        cout << getRandomInteger(1, 6);
        getline(std::cin, choice);
    } while (choice == "");
    
    return 0;
}