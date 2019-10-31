#include <iostream>
#include "constants.h"

double getTowerHeight()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double height;
    std::cin >> height;
    return height;
}

double calculateBallHeight(double towerHeight, double time)
{
    double height{ towerHeight - myConstants::gravity * (time * time) / 2 };
    return height;
}

void printBallHeight(double ballHeight, double time)
{
    if (ballHeight > 0.0)
        std::cout << "At " << time << " seconds, the ball is at height: " << ballHeight << " meters" << std::endl;
    else 
        std::cout << "At " << time << " seconds, the ball is on the ground." << std::endl;
}

void calculateAndPrintBallHeight(double towerHeight, double time)
{
    double height{ calculateBallHeight(towerHeight, time) };
    printBallHeight(height, time);
}

int main()
{
    const double towerHeight{ getTowerHeight() };
    
    calculateAndPrintBallHeight(towerHeight, 0);
    calculateAndPrintBallHeight(towerHeight, 1);
    calculateAndPrintBallHeight(towerHeight, 2);
    calculateAndPrintBallHeight(towerHeight, 3);
    calculateAndPrintBallHeight(towerHeight, 4);
    calculateAndPrintBallHeight(towerHeight, 5);
}