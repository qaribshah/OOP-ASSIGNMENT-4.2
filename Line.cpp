#include "Line.h"

Line::Line() : Shape(), length(0), thick(0), isVertical(true) {}

Line::Line(const Cstr& color1, char alpha1, const Point& p1, int len, int thick1)
    : Shape(color1, alpha1, p1), length(len), thick(thick1) , isVertical(true){}

Line::Line(const Line& l) : Shape(l) 
{
    length = l.length;
    thick = l.thick;
    isVertical = l.isVertical;
}

Line::~Line() {}

void Line::setLength(int len)
{
    length = len;
}

int Line::getLength() const 
{
    return length;
}

void Line::setThick(int thick1) 
{
    thick = thick1;
}

int Line::getThick() const 
{
    return thick;
}
bool Line::operator==(const Line& a) const 
{
    return Shape::operator==(a) && length == a.length && thick == a.thick && isVertical == a.isVertical;
}

Line& Line::operator=(const Line& a) 
{
    if (this != &a) 
	{
        Shape::operator=(a);
        length = a.length;
        thick = a.thick;
        isVertical = a.isVertical;
    }
    return *this;
}

// Binary operators
Line Line::operator+(const Line& l) const 
{
    Shape::operator+(l);
    Line result = *this;
    if (thick == 1 && l.thick == 1) 
	{
        result.thick = 2;
    }
    else if (thick == 1 && l.thick == 2) 
	{
        result.thick = 2;
    }
    else if (thick == 2 && l.thick == 1) 
	{
        result.thick = 2;
    }
    else if (thick == 2 && l.thick == 2) 
	{
        result.thick = 1;
    }
    return result;
}

Line Line::operator-(const Line& l) const 
{
    Shape::operator-(l);
    Line result = *this;
    if (thick == 1 && l.thick == 1) 
	{
        result.thick = 1;
    }
    else if (thick == 1 && l.thick == 2) 
	{
        result.thick = 2;
    }
    else if (thick == 2 && l.thick == 1) 
	{
        result.thick = 1;
    }
    else if (thick == 2 && l.thick == 2) 
	{
        result.thick = 1;
    }
    return result;
}

// Unary operators
Line& Line::operator++() 
{ // Prefix increment
    ++length;
    Shape::operator++();
    return *this;
}

Line Line::operator++(int) 
{ // Postfix increment
    Line temp = *this;
    ++length;
    Shape::operator++();
    return temp;
}

Line& Line::operator--() 
{ // Prefix decrement
    --length;
    Shape::operator--();
    return *this;
}

Line Line::operator--(int)
{ // Postfix decrement
    Line temp = *this;
    --length;
    Shape::operator--();
    return temp;
}

void Line::draw()
{
    char letter = getAlpha();
    cout << endl;
    for (int i = 0; i < thick; i++) 
	{
        for (int j = 0; j < length; j++)
		{
            cout << letter;
        }
        cout << endl;
    }
    cout << endl;
}
void Line::write(ostream& os) const 
{
    Shape::write(os);
    os << ", Length: " << length << ", Thickness: " << thick;
}

void Line::read(istream& is) 
{
    Shape::read(is);
    cout << "Enter length: ";
    is >> length;
    cout << "Enter thickness: ";
    is >> thick;
}

ostream& operator<<(ostream& os, const Line& l) 
{
    l.write(os);
    return os;
}

istream& operator>>(istream& is, Line& l) 
{
    l.read(is);
    return is;
}
