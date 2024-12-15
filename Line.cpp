#include "Line.h"

#include "Console.h"
#include "Data.h"

void Line::SwitchFlag() {
    if (ColumnType) {
        ColumnType = false;
    } else {
        ColumnType = true;
    }
}

void Line::CreateSymbol(int CoordinateSymbolX, int CoordinateSymbolY) {

    symbols.emplace_back(CoordinateSymbolX, CoordinateSymbolY);
    symbols.back().WriteSelf();
    Console::SetCursorPosition(1, 1);
}

void Line::DeleteSymbol() {
    symbols.front().EraseSelf();
    symbols.erase(symbols.begin());
}

void Line::DrawNextColumn() {
    if (ColumnType) {
        CreateSymbol(CoordinateLineX + 1, CoordinateLineY);
        CreateSymbol(CoordinateLineX - 1, CoordinateLineY);
    } else {
        CreateSymbol(CoordinateLineX, CoordinateLineY);
    }
}

void Line::EraseLastColumn() {
    if (Data::GetLenght() % 2 == 0) {
        if (ColumnType) {
            DeleteSymbol();
            DeleteSymbol();
        } else {
            DeleteSymbol();
        }
    } else {
        if (ColumnType) {
            DeleteSymbol();
        } else {
            DeleteSymbol();
            DeleteSymbol();
        }
    }
}

void Line::UpdateLine() {
    if (CoordinateLineY <= Data::GetLenght()) {
        DrawNextColumn();
        SwitchFlag();
        CoordinateLineY++;
    } else if (Data::GetLenght() < CoordinateLineY && CoordinateLineY <= Data::GetHeightConsole()) {
        EraseLastColumn();
        DrawNextColumn();
        SwitchFlag();
        CoordinateLineY++;
    } else if (CoordinateLineY >= Data::GetHeightConsole()) {
        EraseLastColumn();
        SwitchFlag();
        CoordinateLineY++;
    }
}

Line::Line(): ColumnType(rand() % 2 == 0) {
    CoordinateLineX = Data::GetRandomWidth();
    CoordinateLineY = 1;
}
