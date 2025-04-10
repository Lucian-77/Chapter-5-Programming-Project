// Chapter 5 Programming Project.cpp : This file contains the 'Student Lineup' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::cout << "Which file would you like to alphabetize? (include name & extension): ";
    std::string fName;
    std::cin >> fName;
    std::ifstream file(fName);
    if (!file.is_open()) {
        std::cout << "Error opening file; ensure the file named 'LineUp.txt' is installed on youre device\n";
        return 1;
    }
    std::vector<std::string> namesV;
    std::string names;
    while (std::getline(file, names)) {
        namesV.push_back(names);
    }
    file.close();
    std::sort(namesV.begin(), namesV.end());
    std::cout << "\nOut of all " << namesV.size() << " students, the first person in line should be " << namesV.front() << " and the last person in line should be " << namesV.back() << ".\n";

    return 0;
}
