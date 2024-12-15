#include "Validation.h"

#include <iostream>
#include <string>

int Validation::ValidateSpeed(std::string speed) {
    while (!isInteger(speed)) {
        std::cout << "Неверное значение скорости, введите верное (1-30): ";
        getline(std::cin,speed);
    }

    while(stoi(speed) > 30 || stoi(speed) < 1) {
        std::cout << "Неверное значение скорости, введите верное (1-30): ";
        getline(std::cin, speed);

        while (!isInteger(speed)) {
            std::cout << "Неверное значение скорости, введите верное (1-30): ";
            getline(std::cin,speed);
        }
    }

    return stoi(speed);
}

int Validation::ValidateLength(std::string length) {
    while (!isInteger(length)) {
        std::cout << "Неверное значение длины, введите верное(1-30): ";
        getline(std::cin,length);
    }

    while(stoi(length) > 30 || stoi(length) < 1) {
        std::cout << "Неверное значение длины, введите верное(1-30): ";
        getline(std::cin,length);

        while (!isInteger(length)) {
            std::cout << "Неверное значение длины, введите верное(1-30): ";
            getline(std::cin,length);
        }
    }

    return stoi(length);
}

bool Validation::ValidateChoise(std::string epilepsy) {
    while (isInteger(epilepsy)) {
        std::cout << "вы ввели число, введите Y или N ";
        getline(std::cin, epilepsy);
    }
    while (!isChoise(epilepsy)) {
        std::cout << "вы ввели неверное значение, введите Y или N ";
        getline(std::cin, epilepsy);
    }
    if (epilepsy == "y" || epilepsy == "Y") {
        return true;
    }

    return false;
}

std::string Validation::trimLeadingSpaces(const std::string &str) {
    size_t start = str.find_first_not_of(' ');
    return (start == std::string::npos) ? "" : str.substr(start);
}

bool Validation::isInteger(const std::string& str) {
    trimLeadingSpaces(str);
    try {
        size_t pos;
        stoi(str, &pos);
        return pos == str.size();  // Проверяем, что вся строка была числом
    } catch (...) {
        return false;
    }
}

bool Validation::isChoise(const std::string& str) {
    if (str.size() != 1) {
        return false;
    }

    char firstChar = tolower(str[0]);
    return firstChar == 'y' || firstChar == 'n';
}
