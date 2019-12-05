#include <iostream>

struct Advertising
{
    int adsAmount;
    double percentClicked;
    double averagedEarningsPerClick;
};

double totalEarnings(Advertising yourAdvertising)
{
    double decimalPercentClicked{ yourAdvertising.percentClicked/100 };
    return (yourAdvertising.adsAmount * decimalPercentClicked * 
        yourAdvertising.averagedEarningsPerClick);
}

void printAdvertising(Advertising yourAdvertising)
{
    std::cout << "Ads amount is " << yourAdvertising.adsAmount << '\n';
    std::cout << "Percent clicked is " << yourAdvertising.percentClicked << '\n';
    std::cout << "Average earnings per click is " << 
        yourAdvertising.averagedEarningsPerClick << '\n';
}

int main()
{
    Advertising yourAdvertising;

    std::cout << "How many ads did you show: ";
    std::cin >> yourAdvertising.adsAmount;

    std::cout << "How many percent of visitors clicked on ads: ";
    std::cin >> yourAdvertising.percentClicked;

    std::cout << "Average earnings for each click on ads: ";
    std::cin >> yourAdvertising.averagedEarningsPerClick;
    
    std::cout << '\n';
    printAdvertising(yourAdvertising);

    std::cout << '\n';
    std::cout << "Your total daily earnings is " <<totalEarnings(yourAdvertising) << 
        '\n';
    
    return 0;
}