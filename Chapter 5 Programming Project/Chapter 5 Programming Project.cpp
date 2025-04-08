// Chapter 5 Programming Project.cpp : This file contains the 'Population' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter a starting number of organisms: ";
    float sOrganisms;
    std::cin >> sOrganisms;
    while (sOrganisms < 2 || (sOrganisms - floor(sOrganisms)) != 0) {
        if ((sOrganisms - floor(sOrganisms)) != 0) {
            std::cout << "Please enter a whole number of orgamisms: ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> sOrganisms;
        }
        if (sOrganisms < 2) {
            std::cout << "Please enter a number of orgamisms greater than 2: ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> sOrganisms;
        }
    }
    std::cout << "\nEnter a daily population increase percntage: %";
    float popInc;
    std::cin >> popInc;
    while (popInc < 0) {
        std::cout << "Please enter a positive increase percentage: %";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> popInc;
    }
    std::cout << "\nHow many days would you like to simulate? ";
    float days;
    std::cin >> days;
    while (days < 1) {
        std::cout << "Please enter a number of days greater than 1: ";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> days;
    }


    return 0;
}
