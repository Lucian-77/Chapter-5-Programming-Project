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
    std::string fileName = "LineUp.txt";
    std::ifstream iFile(fileName);
    if (!iFile.is_open()) {
        std::cout << "Error opening file; ensure the file named 'LineUp.txt' is installed on youre device";
        return 1;
    }
    std::vector<std::string> names;
    std::string name;
    while (std::getline(iFile, name)) {
        names.push_back(name);
    }
    iFile.close();
    std::sort(names.begin(), names.end());
    std::cout << name;

    return 0;
}
