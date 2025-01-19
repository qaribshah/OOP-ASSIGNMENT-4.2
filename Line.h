#ifndef LINE_H
#define LINE_H

#include "Shape.h"
using namespace std;

class Line : public Shape 
{
	private:
		int length;
		int thick;
		bool isVertical;

	public:
		Line();
		Line(const Cstr& color1, char alpha1, const Point& p1, int len, int thick1);
		Line(const Line& l);
		~Line();
		void setLength(int len);
		int getLength() const;
		void setThick(int thick1);
		int getThick() const;
		bool operator==(const  Line& s)const;
		Line& operator=(const  Line& s);
		Line operator+(const Line& s) const;
		Line operator-(const  Line& s) const;
		Line& operator++();
		Line operator++(int);
		Line& operator--();
		Line operator--(int);
		void write(ostream& os) const;
		void read(istream& is);
		void draw();
};

ostream& operator<<(ostream& os, const Line& l);
istream& operator>>(istream& is, Line& l);

#endif // LINE_H
