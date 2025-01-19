#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
using namespace std;

class Rectangle : public Shape 
	{
	private:
		int width;
		int length;

	public:
		Rectangle();
		Rectangle(const Cstr& color1, char alpha1, const Point& p1, int w, int h);
		Rectangle(const Rectangle& r);
		~Rectangle();
		void setWidth(int w);
		int getWidth() const;
		void setLength(int h);
		int getLength() const;
		void write(ostream& os) const;
		void read(istream& is);
		void draw();
		bool operator==(const Rectangle& a) const;
		Rectangle& operator=(const Rectangle& a);
		// Binary operators
		Rectangle operator+(const Rectangle& other) const;
		Rectangle operator-(const Rectangle& other) const;
		// Unary operators
		Rectangle& operator++(); // Prefix increment
		Rectangle operator++(int); // Postfix increment
		Rectangle& operator--();// Prefix decrement
		Rectangle operator--(int); // Postfix
};

ostream& operator<<(ostream& os, const Rectangle& r);
istream& operator>>(istream& is, Rectangle& r);

#endif // RECTANGLE_H
