#include "Cstr.h"

Cstr::Cstr() : name(nullptr) {}

Cstr::Cstr(const char* name1) 
{
    deepCopy(name1);
}

Cstr::Cstr(const Cstr& c) 
{
    deepCopy(c.name);
}

Cstr::~Cstr() {
    delete[] name;
}

void Cstr::deepCopy(const char* name1) 
{
    if (name1 == nullptr) 
	{
        name = nullptr;
        return;
    }
    int length = 0;
    while (name1[length] != '\0') length++;
    name = new char[length + 1];
    for (int i = 0; i < length; i++) 
	{
        name[i] = name1[i];
    }
    name[length] = '\0';
}

void Cstr::setname(const char* name1) 
{
    delete[] name;
    deepCopy(name1);
}

const char* Cstr::getname() const 
{
    return name;
}

bool Cstr::operator==(const Cstr& c) const 
{
    int i = 0;
    while (name[i] != '\0' && c.name[i] != '\0') 
	{
        if (name[i] != c.name[i]) return false;
        i++;
    }
    return name[i] == c.name[i];
}

Cstr& Cstr::operator=(const Cstr& c) 
{
    if (this != &c) 
	{
        delete[] name;
        deepCopy(c.name);
    }
    return *this;
}

void Cstr::toUpper() 
{
    for (int i = 0; name[i] != '\0'; i++) 
	{
        if (name[i] >= 'a' && name[i] <= 'z') 
		{
            name[i] = name[i] - 'a' + 'A';
        }
    }
}

void Cstr::toLower() 
{
    for (int i = 0; name[i] != '\0'; i++) 
	{
        if (name[i] >= 'A' && name[i] <= 'Z') 
		{
            name[i] = name[i] - 'A' + 'a';
        }
    }
}

void Cstr::write(ostream& os) const 
{
    os << name;
}

void Cstr::read(istream& is) 
{
    char temp[100];
    is >> temp;
    setname(temp);
}

ostream& operator<<(ostream& os, const Cstr& s) 
{
    s.write(os);
    return os;
}

istream& operator>>(istream& is, Cstr& s) {
    s.read(is);
    return is;
}
