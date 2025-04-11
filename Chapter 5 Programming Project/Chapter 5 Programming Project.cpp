// Chapter 5 Programming Project.cpp : This file contains the 'Population Bar Chart' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::cout << std::setw(64) << std::left << "What is the name of the town you wish to view? ";
    std::string tName;
    std::cin >> tName;
    std::cout << "\nWhat is the name of its data file? (include name & extension):  ";
    std::string fName;
    std::cin >> fName;
    std::ifstream file(fName);
    if (!file.is_open()) {
        std::cout << "Error opening file; ensure the file named 'People.txt' is installed on youre device\n";
        return 1;
    }
    int pop;
    int year = 1900;
    std::cout << "\nPopulation chart for " << tName << ":\n";
    while (file >> pop) {
        std::cout << (year += 20) << ": ";
        for (int i = 1; i <= (pop / 1000); i++) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    file.close();

    return 0;
}
