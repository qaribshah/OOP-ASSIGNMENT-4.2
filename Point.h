#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;
class Point 
{
	private:
		int x_pos;
		int y_pos;

	public:
		Point();
		Point(int x, int y);
		Point(const Point& p);
		~Point() {}

		int getX();
		int getY();
		bool operator==(const Point& p) const;
		Point& operator=(const Point& p);
		void read(istream& rd);
		void write(ostream& wr) const;
};

ostream& operator<<(ostream& wr, const Point& p);
istream& operator>>(istream& rd, Point& p);

#endif // POINT_H
