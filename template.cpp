#include<iostream>

using namespace std;

template <class xyz>

xyz mul(xyz a,xyz b)
{
	return a+b;
}

int main()
{
	float a = 3.5, b = 6.5;
	float z;
	int x = 5, y = 4, r;
	r = mul(x,y);
	cout<< r<<endl;
	z = mul(a,b);
	cout<< z<< endl;
}