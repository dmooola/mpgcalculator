//mpgcalcalculator program. Oladamola Ola-Buraimo. 02/24/26. This code will accept the number of miles driven and the number of gallons used, and display the MPG.
#include <iostream>

int main() {
    double miles, gallons;

    std::cout << "Enter the number of miles driven: ";
    std::cin >> miles;

    std::cout << "Enter the number of gallons used: ";
    std::cin >> gallons; 4

        ;double mpg = miles / gallons;

    std::cout << "The MPG (miles per gallon) is: " << mpg << std::endl;

    return 0;
}
