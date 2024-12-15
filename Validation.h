//
// Created by Владислав Ковригин on 29.11.2024.
//

#ifndef VALIDATION_H
#define VALIDATION_H
#include <string>

class Validation {
    static std::string trimLeadingSpaces(const std::string &str);

    static bool isInteger(const std::string &str);

    static bool isChoise(const std::string &str);

public:
    static int ValidateSpeed(std::string speed);

    static int ValidateLength(std::string length);

    static bool ValidateChoise(std::string epilepsy);
};


#endif //VALIDATION_H
