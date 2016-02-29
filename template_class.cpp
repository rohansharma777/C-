#include<iostream>

using namespace std;

template<class R>
class A
{
	R a,b;
public:
	R bigger(R x,R y);
};

template<class R>
R A<R>::bigger(R x,R y){
	a = x;
	b = y;
	return (a>b?a:b);
}

int main(){
	A <float>obj1;
	cout<<obj1.bigger(12.3,13.4)<<endl;
}