#include "line.h"

Line::Line()
{

}

void Line::setStart(int x, int y) {
    this->start[0] = x;
    this->start[1] = y;
}

void Line::setEnd(int x, int y) {
    this->end[0] = x;
    this->end[1] = y;
}

int * Line::getStart() {
    return this->start;
}

int * Line::getEnd() {
    return this->end;
}

void Line::setId(int id)
{
    this->id = id;
}

int Line::getId()
{
    return this->id;
}
