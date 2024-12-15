#include "Symbol.h"

#include <iostream>

#include "Data.h"

Symbol::Symbol(const int x, const int y) {
    coordinateSymbolX = x;
    coordinateSymbolY = y;
    symbol = Data::GetRandomChar();
}

void Symbol::WriteSelf() const {
    Console::SetCursorPosition(coordinateSymbolX, coordinateSymbolY);
    if(Data::GetEpilepsy()) {
        Console::SetTextColor(Data::GetRandomColor());
    }
    else {
        Console::SetTextColor(2);
    }
    std::cout << symbol;
}

void Symbol::EraseSelf() const {
    Console::SetCursorPosition(coordinateSymbolX, coordinateSymbolY);
    std::cout << " ";
}