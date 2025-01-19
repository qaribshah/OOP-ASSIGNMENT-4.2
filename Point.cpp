#include "Point.h"

Point::Point() : x_pos(0), y_pos(0) {}

Point::Point(int x, int y) : x_pos(x), y_pos(y) {}

Point::Point(const Point& p) : x_pos(p.x_pos), y_pos(p.y_pos) {}

void Point::read(istream& rd) 
{
    rd >> x_pos >> y_pos;
}

void Point::write(ostream& wr) const 
{
    wr << "(" << x_pos << ", " << y_pos << ")";
}

bool Point::operator==(const Point& p) const 
{
    return x_pos == p.x_pos && y_pos == p.y_pos;
}

Point& Point::operator=(const Point& p) 
{
    if (this != &p) {
        x_pos = p.x_pos;
        y_pos = p.y_pos;
    }
    return *this;
}

ostream& operator<<(ostream& wr, const Point& p) 
{
    p.write(wr);
    return wr;
}

istream& operator>>(istream& rd, Point& p) 
{
    p.read(rd);
    return rd;
}
