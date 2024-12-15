#ifndef LINE_H
#define LINE_H
#include <list>
#include "Symbol.h"


class Line {
    std::list<Symbol> symbols;
    int CoordinateLineX, CoordinateLineY;

    bool ColumnType;
    void SwitchFlag();

    void CreateSymbol(int CoordinateSymbolX, int CoordinateSymbolY);
    void DeleteSymbol();

    void DrawNextColumn();
    void EraseLastColumn();

public:
    void UpdateLine();

    Line();

    ~Line() {
        symbols.clear();
    }
};



#endif //LINE_H
