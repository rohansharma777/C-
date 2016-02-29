#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char data[100];
	string s = " ",newline,oldline;
	ifstream rfile;
	rfile.open("msg1.txt");
	while(true){
		rfile>>data;
		cout<<data;
			}
		
	
	
	
	rfile.close();
}