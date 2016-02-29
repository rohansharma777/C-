#include<iostream>

using namespace std;

class Box{
private:
	int length;
	int breadth;
	int height;
	
public:
	Box(int l,int b,int h)
	{
		length = l;
		breadth = b;
		height = h;
	}
	
	int volume();
	void compare(Box obj);
};

int Box :: volume(){
	return length*breadth*height;
}

void Box :: compare(Box obj){
	if(this->volume() > obj.volume()){
		cout<< "Box 1  has greater volume"<<endl;
	}
	else{
		if(this-> volume() < obj.volume()){
			cout<< "Box 2  has greater volume"<<endl;
		}
		else{
			cout<< "volumes are equal"<<endl;
		}
	}
}

int main(){
	Box Box1(20,2,3);
	Box Box2(4,5,6);
	
	cout<<"Volume of Box1 "<<Box1.volume();
	cout<<"Volume of Box2 "<<Box2.volume();
	
	cout<<"Which has greater volume ? : "<<endl;
	Box1.compare(Box2);
}

