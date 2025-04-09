// Chapter 5 Programming Project.cpp : This file contains the 'Patterns' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Which pattern (A or B) would you like to display? ";
    char selection;
    std::cin >> selection;
    while (selection != 'A' && selection != 'a' && selection != 'B' && selection != 'b') {
        std::cout << "Please make a valid selection; (A or B): ";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> selection;
    }
    std::cout << '\n';
    if (selection == 'A' || selection == 'a') {
        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= i; j++) {
                std::cout << '*';
            }
            std::cout << '\n';
        }
    }
    if (selection == 'B' || selection == 'b') {
        for (int i = 10; i >= 1; i--) {
            for (int j = i; j > 0; j--) {
                std::cout << '*';
            }
            std::cout << '\n';
        }
    }
    std::cout << "\nWould you like to display another pattern? (Y or N) ";
    char yon;
    std::cin >> yon;
    while (yon != 'Y' && yon != 'y' && yon != 'N' && yon != 'n') {
        std::cout << "Please make a valid selection; (Y or N): ";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> yon;
    }
    while (yon == 'Y' || yon == 'y') {
        std::cout << "Which pattern (A or B) would you like to display? ";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> selection;
        while (selection != 'A' && selection != 'a' && selection != 'B' && selection != 'b') {
            std::cout << "Please make a valid selection; (A or B): ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> selection;
        }
        std::cout << '\n';
        if (selection == 'A' || selection == 'a') {
            for (int i = 1; i <= 10; i++) {
                for (int j = 1; j <= i; j++) {
                    std::cout << '*';
                }
                std::cout << '\n';
            }
        }
        if (selection == 'B' || selection == 'b') {
            for (int i = 10; i >= 1; i--) {
                for (int j = i; j > 0; j--) {
                    std::cout << '*';
                }
                std::cout << '\n';
            }
        }
        std::cout << "\nWould you like to display another pattern? (Y or N) ";
        while (yon != 'Y' && yon != 'y' && yon != 'N' && yon != 'n') {
            std::cout << "Please make a valid selection; (Y or N): ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> yon;
        }
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> yon;
    }
    if (yon == 'N' || yon == 'n') {
        return 0;
    }

    return 0;
}
