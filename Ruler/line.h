#ifndef LINE_H
#define LINE_H
#include <tuple>

/*
 * Class that describes the starting and end point of a line
 * */

class Line
{
public:
    Line();

    void setStart(int x, int y);
    void setEnd(int x, int y);

    int* getStart();
    int* getEnd();

    void setId(int id);
    int getId();

private:
    int id;
    int start[2];
    int end[2];
};

#endif // LINE_H
