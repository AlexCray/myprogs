#include <iostream>

struct Fraction
{
    int numerator;
    int denominator;
};

Fraction inputFraction()
{
    using namespace std;
    int numerator;
    cout << "Fraction numerator: ";
    cin >> numerator;

    int denominator;
    cout << "Fraction denominator: ";
    cin >> denominator;

    Fraction fraction{ numerator, denominator };
    return fraction;
}

double multiply(Fraction fraction1, Fraction fraction2)
{
    double decimalFraction1{ static_cast<double>(fraction1.numerator) /
        fraction1.denominator };
    double decimalFraction2{ static_cast<double>(fraction2.numerator) /
        fraction2.denominator };

    return (decimalFraction1 * decimalFraction2);
}

int main()
{
    using namespace std;

    cout << "Input first fraction!\n";
    Fraction fraction1{ inputFraction() };
    cout << '\n';

    cout << "Input second fraction!\n";
    Fraction fraction2{ inputFraction() };
    cout << '\n';

    cout << "Their product is " << multiply(fraction1, fraction2) << '\n';

    return 0;
}