#include<iostream>

using namespace std;

class A{
private:
	int a;
	int b;
	
public:
	int add();
	A(int c,int d){
		a = c;
		b = d;
	}
};

int A :: add()
{
	return (a+b);
}

int main()
{
	A x(1,2);
	cout<<"Addition of a and b: "<<x.add();
	return 0;
}