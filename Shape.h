#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include "Cstr.h"
#include "Point.h"
using namespace std;

class Shape 
{
private:
    Cstr color;
    char alphabet;
    Point center;

public:
		Shape();
		Shape(const Cstr& color1, char alpha1, const Point& p1 = Point(3, 3));
		Shape(const Shape& s);
		~Shape();
		void setAlpha(char ch1);
		char getAlpha() const;
		void deepCopy(const Shape& s);
		bool operator==(const Shape& s) const;
		Shape& operator=(const Shape& s);
		Shape operator+(const Shape& s) const;
		Shape operator-(const Shape& s) const;
		Shape& operator++();
		Shape operator++(int);
		Shape& operator--();
		Shape operator--(int);
		Point getCenter() const;
		void write(ostream& wr) const;
		void read(istream& is);
};

ostream& operator<<(ostream& os, const Shape& s);
istream& operator>>(istream& is, Shape& s);

#endif // SHAPE_H
