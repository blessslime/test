#include "Console.h"
#include <iostream>
#include "Windows.h"


void Console::SetCursorPosition(int x, int y) {
    std::cout << "\033[" << y << ";" << x << "H";
}
void Console::SetTextColor(int Color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}



void Console::GetConsoleSize(int &width, int &height) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
}

void Console::WriteInfo() {
    system("cls");
    std::cout << "Информация о программе:" << "\n";
    std::cout << "Программа матрица рисует линии типа(ромб), принимает вот такие параметры:" << "\n";
    std::cout << "1 параметр - Скорость (1 - 30)" << "\n";
    std::cout << "2 параметр - Длина (1 - 30)" << "\n";
    std::cout << "3 параметр - Количество линий в секунду (1 - 30)" << "\n";
    std::cout << "4 параметр - режим эпилепсии (y/n)" << "\n" << "\n";
}

void Console::HideCursor() {
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}