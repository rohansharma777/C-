#include <iostream>

using namespace std;

class A
{
public:
	int x;
	int y;
	
	void setvalue()
	{
		x = 10;
		y = 20;
	}
};

class C
{
public:
	int length;
	int breadth;
	
	void setvalues_area()
	{
		length = 20;
		breadth =30;
		
		cout<<"Area : "<<(length*breadth);
	}
};

class B : public A, public C
{
public:
	int r;
	int s;
	
	B(int x, int y)
	{
		r = x;
		s = y;
		setvalue();
		setvalues_area();
	}
};

int main()
{
	B b(40,50);
	cout<< "r = "<<b.r;
	cout<< "s = "<<b.s;
	cout<< "x from A = "<<b.x;
	cout<< "y from A = "<<b.y;
}