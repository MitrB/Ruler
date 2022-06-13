#ifndef DRAWNLINES_H
#define DRAWNLINES_H

#include "line.h"
#include <map>

class DrawnLines
{
public:
    DrawnLines();
    ~DrawnLines();

    void addLine(Line* line);
    void removeLine(int id);

    Line * getLine(int id);

    std::map<int, Line*>* getAllLines();

private:
    std::map<int, Line*> lines;
};

#endif // DRAWNLINES_H
