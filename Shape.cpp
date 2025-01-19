#include "Shape.h"

Shape::Shape() : color("red"), alphabet('a'), center() {}

Shape::Shape(const Cstr& color1, char alpha1, const Point& p1)
    : color(color1), alphabet(alpha1), center(p1) {}

Shape::Shape(const Shape& s) 
{
    deepCopy(s);
}

Shape::~Shape() {}

void Shape::setAlpha(char ch1) 
{
    alphabet = ch1;
}

char Shape::getAlpha() const 
{
    return alphabet;
}

void Shape::deepCopy(const Shape& s) 
{
    color = s.color;
    alphabet = s.alphabet;
    center = s.center;
}

bool Shape::operator==(const Shape& s) const 
{
    return color == s.color && alphabet == s.alphabet && center == s.center;
}

Shape& Shape::operator=(const Shape& s) 
{
    if (this != &s) 
	{
        deepCopy(s);
    }
    return *this;
}

Shape Shape::operator+(const Shape& s) const 
{
    Shape result(*this);
    result.alphabet = (alphabet - 'a' + s.alphabet - 'a') % 26 + 'a';
    return result;
}

Shape Shape::operator-(const Shape& s) const 
{
    Shape result(*this);
    int diff = (alphabet - s.alphabet + 26) % 26;
    result.alphabet = diff + 'a';
    return result;
}

Shape& Shape::operator++() 
{
    if (alphabet < 'z') 
	{
        alphabet++;
    }
    return *this;
}

Shape Shape::operator++(int) 
{
    Shape temp = *this;
    ++(*this);
    return temp;
}

Shape& Shape::operator--() 
{
    if (alphabet > 'a') 
	{
        alphabet--;
    }
    return *this;
}

Shape Shape::operator--(int) 
{
    Shape temp = *this;
    --(*this);
    return temp;
}

Point Shape::getCenter() const 
{
    return center;
}

void Shape::write(ostream& wr) const 
{
    wr << "Color: ";
    color.write(wr);
    wr << ", Alphabet: " << alphabet << ", Center: ";
    center.write(wr);
}

void Shape::read(istream& is) 
{
    cout << "Enter color: ";
    color.read(is);
    cout << "Enter alphabet: ";
    is >> alphabet;
    cout << "Enter center (x y): ";
    center.read(is);
}

ostream& operator<<(ostream& os, const Shape& s) 
{
    s.write(os);
    return os;
}

istream& operator>>(istream& is, Shape& s) 
{
    s.read(is);
    return is;
}
