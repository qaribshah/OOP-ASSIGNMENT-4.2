#ifndef CSTR_H
#define CSTR_H

#include <iostream>
using namespace std;

class Cstr 
{
	private:
		char* name;

	public:
		Cstr();
		Cstr(const char* name1);
		Cstr(const Cstr& c);
		~Cstr();

		void deepCopy(const char* name1);
		void setname(const char* name1);
		const char* getname() const;
		bool operator==(const Cstr& c) const;
		Cstr& operator=(const Cstr& c);
		void toUpper();
		void toLower();
		void write(ostream& os) const;
		void read(istream& is);
};

ostream& operator<<(ostream& os, const Cstr& s);
istream& operator>>(istream& is, Cstr& s);

#endif // CSTR_H
