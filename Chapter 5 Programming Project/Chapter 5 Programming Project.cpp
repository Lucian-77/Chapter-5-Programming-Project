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
    std::cout << "What is the name of the town you wish to view? ";
    std::string tName;
    std::cin >> tName;
    std::cout << "\nWhat is the name of its data file? (include name & extension): ";
    std::string fName;
    std::cin >> fName;
    std::ifstream file(fName);
    if (!file.is_open()) {
        std::cout << "Error opening file; ensure the file named 'People.txt' is installed on youre device\n";
    }
    std::vector<std::string> popV;
    std::string pop;
    while (std::getline(file, pop)) {
        popV.push_back(pop);
    }
    file.close();
    std::cout << popV[1];

    return 0;
}
