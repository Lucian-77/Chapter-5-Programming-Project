// Chapter 5 Programming Project.cpp : This file contains the 'Guessing Game' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

int main()
{
    std::cout << std::setw(64) << std::left << "Lets play a game... Guess the number I'm thinking of:";
    float guess;
    std::cin >> guess;
    int i = 1;
    srand(time(0));
    int randN = rand() % 999999;
    while (guess < randN || guess > randN || (guess - floor(guess)) != 0) {
        if ((guess - floor(guess)) != 0) {
            std::cout << randN << std::setw(65) << std::left << "\nThe number I'm thinking of is an integer... Guess again:";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> guess;
            i++;
        }
        if (guess < 0) {
            std::cout << std::setw(63) << std::left << "\nThe number I'm thinking of is positive... Guess again:";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> guess;
            i++;
        }
        if (guess < randN) {
            std::cout << std::setw(65) << std::left << "\nThe number I'm thinking of is larger than that... Guess again:";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> guess;
            i++;
        }
        if (guess > randN) {
            std::cout << "\nThe number I'm thinking of is smaller than that... Guess again: ";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> guess;
            i++;
        }
        if (guess == randN) {
            std::cout << "\nCongradulations... You've guessed the correct number!\n";
            i++;
        }
    }
    std::cout << "(You guessed it correctly in " << i << " tries)\n\n\n\nWould you like to play again... (Y/N): ";
    std::cin.clear();
    std::cin.ignore(256, '\n');
    char yon;
    std::cin >> yon;
    while (yon != 'Y' && yon != 'y' && yon != 'N' && yon != 'n') {
        std::cout << std::setw(37) << std::left << "Please enter a valid selection (Y/N):";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> yon;
    }
    if (yon == 'N' || yon == 'n') {
        std::cout << "\nGoodbye\n";
        return 0;
    }
    while (yon == 'Y' || yon == 'y') {
        std::cout << std::setw(66) << std::left << "\n\nGuess the number I'm thinking of:";
        std::cin >> guess;
        int randN2 = rand() % 999999;
        i = 1;
        while (guess < randN2 || guess > randN2 || (guess - floor(guess)) != 0) {
            if ((guess - floor(guess)) != 0) {
                std::cout << randN2 << std::setw(65) << std::left << "\nThe number I'm thinking of is an integer... Guess again:";
                std::cin.clear();
                std::cin.ignore(256, '\n');
                std::cin >> guess;
                i++;
                }
            if (guess < 0) {
                std::cout << std::setw(63) << std::left << "\nThe number I'm thinking of is positive... Guess again:";
                std::cin.clear();
                std::cin.ignore(256, '\n');
                std::cin >> guess;
                i++;
            }
            if (guess < randN2) {
                std::cout << std::setw(65) << std::left << "\nThe number I'm thinking of is larger than that... Guess again:";
                std::cin.clear();
                std::cin.ignore(256, '\n');
                std::cin >> guess;
                i++;
            }
            if (guess > randN2) {
                std::cout << "\nThe number I'm thinking of is smaller than that... Guess again: ";
                std::cin.clear();
                std::cin.ignore(256, '\n');
                std::cin >> guess;
                i++;
            }
            if (guess == randN2) {
                std::cout << "\nCongradulations... You've guessed the correct number!\n";
                i++;
            }
        }
        std::cout << "(You guessed it correctly in " << i << " tries)\n\n\n\nWould you like to play again... (Y/N): ";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> yon;
        while (yon != 'Y' && yon != 'y' && yon != 'N' && yon != 'n') {
            std::cout << std::setw(37) << std::left << "Please enter a valid selection (Y/N):";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> yon;
        }
        if (yon == 'N' || yon == 'n') {
            std::cout << "\nGoodbye\n";
            return 0;
        }
    }

    return 0;
}
