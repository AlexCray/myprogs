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
    int randomInt;
    string choice;

    do
    {
        system("cls");
        randomInt = getRandomInteger(1, 6);
        switch(randomInt)
        {
            case 1:
                cout << "===========" << endl;
                cout << "|         |" << endl;
                cout << "|         |" << endl;
                cout << "|    *    |" << endl;
                cout << "|         |" << endl;
                cout << "|         |" << endl;
                cout << "===========" << endl;
                break;
            case 2:
                cout << "===========" << endl;
                cout << "|         |" << endl;
                cout << "|    *    |" << endl;
                cout << "|         |" << endl;
                cout << "|    *    |" << endl;
                cout << "|         |" << endl;
                cout << "===========" << endl;
                break;
            case 3:
                cout << "===========" << endl;
                cout << "|         |" << endl;
                cout << "|  *      |" << endl;
                cout << "|    *    |" << endl;
                cout << "|      *  |" << endl;
                cout << "|         |" << endl;
                cout << "===========" << endl;
                break;
            case 4:
                cout << "===========" << endl;
                cout << "|         |" << endl;
                cout << "|  *   *  |" << endl;
                cout << "|         |" << endl;
                cout << "|  *   *  |" << endl;
                cout << "|         |" << endl;
                cout << "===========" << endl;
                break;
            case 5:
                cout << "===========" << endl;
                cout << "|         |" << endl;
                cout << "|  *   *  |" << endl;
                cout << "|    *    |" << endl;
                cout << "|  *   *  |" << endl;
                cout << "|         |" << endl;
                cout << "===========" << endl;
                break;
            case 6:
                cout << "===========" << endl;
                cout << "|         |" << endl;
                cout << "|  *   *  |" << endl;
                cout << "|  *   *  |" << endl;
                cout << "|  *   *  |" << endl;
                cout << "|         |" << endl;
                cout << "===========" << endl;
                break;
        }
        getline(cin, choice);
    } while (choice == "");

    return 0;
}