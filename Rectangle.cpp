#include "Rectangle.h"

Rectangle::Rectangle() : Shape(), width(0), length(0) {}

Rectangle::Rectangle(const Cstr& color1, char alpha1, const Point& p1, int w, int h)
    : Shape(color1, alpha1, p1), width(w), length(h) {}

Rectangle::Rectangle(const Rectangle& r) : Shape(r) 
{
    width = r.width;
    length = r.length;
}

Rectangle::~Rectangle() {}

void Rectangle::setWidth(int w)
{
    width = w;
}

int Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setLength(int h) 
{
    length = h;
}

int Rectangle::getLength() const 
{
    return length;
}
bool   Rectangle::operator==(const   Rectangle& a) const
{
    return Shape::operator==(a) && length == a.length && width == a.width;
}

Rectangle& Rectangle::operator=(const Rectangle& a)
{
    if (this != &a)
	{
        Shape::operator=(a);
        length = a.length;
        width = a.width;
    }
    return *this;
}

// Binary operators
Rectangle Rectangle ::operator+(const Rectangle& l) const 
{
    Shape::operator+(l);
    Rectangle result;
    result.length = length + l.length;
    result.width = width + l.width;
    return result;
}

Rectangle Rectangle::operator-(const Rectangle& l) const
{
    Shape::operator+(l);
    Rectangle result;
    result.length = length - l.length;
    result.width = width - l.width;
    return result;
}

// Unary operators
Rectangle& Rectangle::operator++() 
{ // Prefix increment
    ++length;
    ++width;
    Shape::operator++();
    return *this;
}

Rectangle Rectangle::operator++(int) 
{ // Postfix increment
    Rectangle temp = *this;
    ++length;
    ++width;
    Shape::operator++();
    return temp;
}

Rectangle& Rectangle::operator--()
{ // Prefix decrement
    --length;
    --width;

    Shape::operator--();
    return *this;
}

Rectangle Rectangle::operator--(int)
{ // Postfix decrement
    Rectangle temp = *this;
    --length;
    --width;
    Shape::operator--();
    return temp;
}
void Rectangle::draw()
{
	if (length < 1 || width < 1) 
	{
		cout << "Invalid rectangle dimensions!" << endl;
		return;
	}

	char letter = getAlpha();
	cout << endl;

	for (int i = 1; i <= length; i++)
	{
		for (int j = 1; j <= width; j++)
		{
			if (i == 1 || i == length || j == 1 || j == width)
			{
				cout << letter << " ";  // Use 1 space for alignment
			}
			else
			{
				cout << "  ";  // Use 2 spaces for interior
			}
		}
		cout << endl;
	}
	cout << endl;
}



void Rectangle::write(ostream& os) const 
{
    Shape::write(os);
    os << ", Width: " << width << ", Length: " << length;
}

void Rectangle::read(istream& is) 
{
    Shape::read(is);
    cout << "Enter width: ";
    is >> width;
    cout << "Enter length: ";
    is >> length;
}

ostream& operator<<(ostream& os, const Rectangle& r) 
{
    r.write(os);
    return os;
}

istream& operator>>(istream& is, Rectangle& r) 
{
    r.read(is);
    return is;
}
