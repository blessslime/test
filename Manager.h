#ifndef MANAGER_H
#define MANAGER_H
#include <vector>

#include "Line.h"

class Manager {
    std::vector<Line> Lines;

    void CreateLine();

public:
    Manager();

    void DoMatrix();
};


#endif //MANAGER_H
