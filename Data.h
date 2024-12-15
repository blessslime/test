#ifndef DATA_H
#define DATA_H
#include <string>

#include "Console.h"

class Data {
    static int Speed;
    static int lenght;
    static bool Epilepsy;
    static int Width;
    static int Height;

public:
    //CONSOLE SIZE
    static void OverwriteConsoleSize() {
        Console::GetConsoleSize(Width, Height);
    }

    //SPEED
    static void SetSpeed(const int speed) {
        Speed = speed;
    }

    static int GetSpeed() {
        return Speed;
    }

    //LENGTH
    static void SetLength(const int length) {
        lenght = length;
    }

    static int GetLenght() {
        return lenght;
    }

    //EPILEPSY
    static void SetEpilepsy(const bool epilepsy) {
        Epilepsy = epilepsy;
    }

    static bool GetEpilepsy() {
        return Epilepsy;
    }

    //CONSOLE PARAMETRS
    static int GetWidthConsole() {
        return Width;
    }

    static int GetHeightConsole() {
        return Height;
    }

    //Recepient

    static std::string GetInput();

    //Random

    static char GetRandomChar();

    static int GetRandomColor();

    static int GetRandomInt(int numberBegin, int numberEnd);

    static int GetRandomWidth();
};


#endif //DATA_H
