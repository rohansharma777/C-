#include<iostream>

using namespace std;

class shape{
public: 
	virtual void area();
};
void shape::area(){
	
}
class square: public shape{
public:
	int side;
	void area(){
		side = 10;
		cout<<"Area of square is : "<<(side*side)<<endl;
	}
};
class circle: public shape{
public:
	int radius;
	
	void area(){
		float pi = 3.14;
		radius = 5;
		cout<<"Area of circle is : "<<(pi*radius*radius)<<endl;
	}
};

int main(){
	square obj1;
	circle obj2;
	
	shape *s1 = &obj1;
	shape *s2 = &obj2;
	
	s1->area();
	s2->area();
}
