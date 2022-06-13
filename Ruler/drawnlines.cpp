#include "drawnlines.h"


DrawnLines::DrawnLines()
{

}

DrawnLines::~DrawnLines()
{

}

void DrawnLines::addLine(Line* line)
{
    this->lines.insert({line->getId(), line});
}

void DrawnLines::removeLine(int id)
{
    this->lines.erase(id);
}

Line *DrawnLines::getLine(int id)
{
    Line* l = this->lines.find(id)->second;
    return l;
}

// NOT SURE
std::map<int, Line*> *DrawnLines::getAllLines()
{
    return &this->lines;
}
