// Chapter 5 Programming Project.cpp : This file contains the 'Population' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    std::cout << std::setw(51) << std::left << "Enter a starting number of organisms:";
    float sOrganisms;
    std::cin >> sOrganisms;
    while (sOrganisms < 2 || (sOrganisms - floor(sOrganisms)) != 0) {
        if ((sOrganisms - floor(sOrganisms)) != 0) {
            std::cout << std::setw(51) << "Please enter a whole number of organisms: ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> sOrganisms;
        }
        if (sOrganisms < 2) {
            std::cout << "Please enter a number of organisms greater than 2: ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> sOrganisms;
        }
    }
    std::cout << "\nEnter a daily population increase percentage:" << std::right << '%';
    float popInc;
    std::cin >> popInc;
    while (popInc < 0) {
        std::cout << "Please enter a positive increase percentage: %";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> popInc;
    }
    float popIncPer = popInc / 100;
    std::cout << "\nHow many days would you like to simulate? ";
    float days;
    std::cin >> days;
    while (days < 1 || (days - floor(days)) != 0) {
        if (days < 1) {
            std::cout << "Please enter a number of days greater than 1: ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> days;
        }
        if ((days - floor(days)) != 0) {
            std::cout << "Please enter a whole number of days: ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> days;
        }
    }
    float pop;
    for (int i = 1; i <= days; i++) {
        pop = sOrganisms * exp(popIncPer * i);
        std::cout << std::fixed << std::setprecision(2) << "\nThe population after " << i << " days is: " << pop;
    }
    std::cout << "\n\nThe total population after " << std::fixed << std::setprecision(0) << days << " days is: " << std::fixed << std::setprecision(2) << sOrganisms * exp(popIncPer * days) << '\n';

    return 0;
}
