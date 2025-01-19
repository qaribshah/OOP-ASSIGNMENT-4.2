#include "Cstr.h"
#include "Point.h"
#include "Shape.h"
#include "Line.h"
#include "Rectangle.h"

int main()
{
	cout << "***** Start Testing Class Shape *****\n";
	cout << "%%% testing constructors %%%\n";
	Point p(1, 2);
	Point q(5, 4);
	Shape A("red",'a', p);
	Shape B("green",'b', q);
	Shape C = A;
	cout << "%%% testing operator == %%%\n";
	if (A == B)
	{
		cout << B << endl;
	}
	if (A == C)
	{
		cout << C << endl;
	}
	cout << "%%% testing operator = %%%\n";
	A = B;
	if (A == B)
	{
		cout << A << endl;
	}
	cout << "%%% testing operator + %%%\n";
	A = B + C;
	cout << B << " + " << C << " = " << A << endl;
	cout << "%%% testing operator pre ++ %%%\n";
	C = ++A;
	cout << "++A = " << C << " and A = " << A << endl;
	cout << "%%% testing operator post -- %%%\n";
	B = A--;
	cout << "A-- = " << B << " and A = " << A << endl;
	cout << "%%% testing operators >> and >> %%%\n";
	cin >> A >> B;
	cout << A << B << endl;
	cout << "***** Testing Class Shape End *****\n";
	cout << "@@@@@ Start Testing Class Line @@@@@\n";
	cout << "### testing constructors ###\n";
	Point r(3, 4);
	Point s(4, 5);
	Point t(2, 3);
	Line L("red",'a', r, 2,2);
	Line M("green",'b',s, 3, 3);
	Line N("black",'c',t, 4, 5);
	Line O = N;
	cout << M << N << O << endl;
	cout << "### testing operator == ###\n";
	if (L == M)
	{
		cout << L << endl;
	}
	if (O == N)
	{
		cout << N << endl;
	}
	cout << "### testing operator = ###\n";
	L = M;
	if (L == M)
	{
		cout << M << endl;
	}
	cout << "### testing operator + ###\n";
	L = N + M;
	cout << N << " + " << M << " = " << L << endl;
	cout << "### testing operator pre ++ ###\n";
	N = ++L;
	cout << "++L = " << N << " and L = " << L << endl;
	cout << "### testing operator post -- ###\n";
	M = L--;
	cout << "L-- = " << M << " and L = " << L << endl;
	cout << "### testing operator >> and << ###\n";
	cin >> L >> M;
	cout << L << M << endl;
	cout << "### testing function draw ###\n";
	L.draw();
	cout << "@@@@@ Testing Class Line End @@@@@\n";
	cout << "$$$$$ Start Testing Class Rectangle $$$$$\n";
	cout << "&&& testing constructors &&&\n";
	Rectangle W("red",'a',r,2, 2);
	Rectangle X("green",'b',s, 3, 3);
	Rectangle Y("black",'c',t, 4, 5);
	Rectangle Z = Y;
	cout << X << Y << Z << endl;
	cout << "&&& testing operator == &&&\n";
	if (Z == X)
	{
		cout << Z << endl;
	}
	if (Z == Y)
	{
		cout << Y << endl;
	}
	cout << "&&& testing operator = &&&\n";
	Z = X;
	if (Z == X)
	{
		cout << X << endl;
	}
	cout << "&&& testing operator + &&&\n";
	Z = Y + X;
	cout << Y << " + " << X << " = " << Z << endl;
	cout << "&&& testing operator pre ++ &&&\n";
	Y = ++Z;
	cout << "++Z = " << Y << " and Z = " << Z << endl;
	cout << "&&& testing operator post -- &&&\n";
	X = Z--;
	cout << "Z-- = " << X << " and Z = " << Z << endl;
	cout << "&&& testing operator >> and << &&&\n";
	cin >> Z >> X;
	cout << Z << X << endl;
	cout << "&&& testing function draw &&&\n";
	Z.draw();
	cout << "$$$$$ Testing Class Rectangle End $$$$$\n";

	system("pause");
	return 0;
}