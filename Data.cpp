#include "Data.h"

#include <iostream>
#include <string>
#include <random>

#include "Console.h"

int Data::Speed = 0;
int Data::lenght = 0;
int Data::Width = 1;
int Data::Height = 1;
bool Data::Epilepsy = false;

std::string Data::GetInput() {
    std::string input;
    getline(std::cin, input);
    return input;
}

char Data::GetRandomChar() {
    std::random_device sd;
    std::mt19937 gen(sd());
    std::uniform_int_distribution<> distr(33, 126);
    char randomChar = distr(gen);
    return randomChar;
}

int Data::GetRandomColor() {
    std::random_device sd;
    std::mt19937 gen(sd());
    std::uniform_int_distribution<> distr(1, 15);
    int randomColor = distr(gen);
    return randomColor;
}


int Data::GetRandomInt(int numberBegin, int numberEnd) {
    std::random_device sd;
    std::mt19937 gen(sd());
    std::uniform_int_distribution<> distr(numberBegin, numberEnd);
    int randomInt = distr(gen);
    return randomInt;
}

int Data::GetRandomWidth() {
    int width, height;
    Console::GetConsoleSize(width, height);
    std::random_device sd;
    std::mt19937 gen(sd());
    std::uniform_int_distribution<> distr(2, (width - 1));
    int randomWidth = distr(gen);
    return randomWidth;
}
