#include<iostream>

using namespace std;
class peon;
class clerk
{
private:
	int salary;
	public:
	clerk(int a){
		salary = a;
	}
	
friend void income_tax(clerk,peon);
};
class peon
{
private:
	int salary;
	public:
	peon(int a){
		salary = a ; 
	}
	friend  void income_tax(clerk,peon);
};

void income_tax(clerk a,peon b){
	int rate = 5;
	cout<<"ITax on Clerk sal: "<<(a.salary*rate/100);
	cout<<"ITax on Peon sal: "<<(b.salary*rate/100);
}

int main ()
{
	clerk Deepti(75000);
	peon Madhu(20000);
	
	cout<<"Income_tax to be paid by clerk and peon"<<endl;
	income_tax(Deepti, 0);

	return 0 ;
}