// Эта программа выводит на экран число, являющееся суммой двух целых чисел

#include "io.h"

int main()
{
    int x = readNumber();
    int y = readNumber();

    // передаём результат в функцию writeAnswer()
    writeAnswer(x + y);

    return 0;
}