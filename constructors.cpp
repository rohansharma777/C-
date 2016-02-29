#include<iostream>

using namespace std;

class A
{
	public:
	int length;
	int breadth;
	
	A()
	{
		length = 10;
		breadth = 20;
	}
	A(int x,int y)
	{
		length = x;
		breadth = y;
	}
	A(A &obj)
	{
		length = obj.length;
		breadth = obj.breadth;
	}
	
	int area()
	{
		return(length*breadth);
	}
};

int main()
{
	A obj1;
	A obj2(20,20);
	A obj3(obj2);
	
	cout<<obj1.area();
	cout<<obj2.area();
	cout<<obj3.area();
}