

#ifndef SYMBOL_H
#define SYMBOL_H

class Symbol {
    int coordinateSymbolX = 0;
    int coordinateSymbolY = 0;
    char symbol = ' ';
public:
    Symbol(int x, int y);
    void WriteSelf() const;
    void EraseSelf() const;
};



#endif //SYMBOL_H
