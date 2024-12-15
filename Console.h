#ifndef CONSOLE_H
#define CONSOLE_H



class Console {
public:
    static void SetCursorPosition(int x, int y);

    static void SetTextColor(int Color);

    static void GetConsoleSize(int &width, int &height);

    static void WriteInfo();
    static void HideCursor() ;
};



#endif //CONSOLE_H
