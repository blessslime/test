#include "Manager.h"
#include <cstdlib>
#include <thread>
#include <Windows.h>

#include "Console.h"
#include "Data.h"

void Manager::CreateLine() {
    Lines.emplace_back();
}

Manager::Manager() {
    system("cls");
    Data::OverwriteConsoleSize();
    Console::HideCursor();

}

void Manager::DoMatrix() {
    while(true) {
        Data::OverwriteConsoleSize();
        CreateLine();
        for (int i = 0; i < Data::GetLenght() + Data::GetHeightConsole(); i++) {
            Lines.back().UpdateLine();
            std::this_thread::sleep_for(std::chrono::milliseconds(1000/Data::GetSpeed()));
        }
        Lines.erase(Lines.begin());
    }
}
