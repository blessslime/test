#include <iostream>
#include <string>

#include "Console.h"
#include "Data.h"
#include "Manager.h"
#include "Validation.h"


int main(int argc, char *argv[]) {
    std::system("chcp 65001");
    Console::WriteInfo();
    if (argc == 4) {
        //SetSpeed
        Data::SetSpeed(Validation::ValidateSpeed(argv[1]));

        //SetLength
        Data::SetLength(Validation::ValidateLength(argv[2]));

        //SetEpilepsy
        Data::SetEpilepsy(Validation::ValidateChoise(argv[3]));
    }
    if (argc == 1) {
        //SetSpeed
        std::cout << "Скорость(значения 1-30): ";
        Data::SetSpeed(Validation::ValidateSpeed(Data::GetInput()));
        Console::WriteInfo();

        //SetLength
        std::cout << "Длина (значения 1-30): ";
         Data::SetLength(Validation::ValidateLength(Data::GetInput()));
        Console::WriteInfo();

        //SetEpilepsy
        std::cout << "Режим эпилепсии (y/n): ";
        Data::SetEpilepsy(Validation::ValidateChoise(Data::GetInput()));
        Console::WriteInfo();
    }

    if (argc == 2 && std::string(argv[1]) == "help") {
        //information
        Console::WriteInfo();
        std::cout << "Пожалуйста запустите программу в консольном или десктопном режиме" << "\n";
    }

    if (argc == 3 || argc > 4) {
        std::cout << "Неверное количество параметров" << "\n";
    }

    Manager manager = Manager();
    manager.DoMatrix();
}
