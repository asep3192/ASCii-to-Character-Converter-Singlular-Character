#include <iostream>
#include <conio.h>
using namespace std;
void main()

{

	cout<<"Welcome to the ASCii to character converter"<<endl;
	cout<<"You have 10 entries. (50 character entries) "<<endl<<endl;
	cout<<"Written by Asep1582 (RaspingWheel22)"<<endl;
	cout<<"Press q or Q to quit"<<endl<<endl;

	char ch;
	cout<<"Enter a number/letter/special symbol:  "<<endl;
	int k=0; 
	do
	{ 

		k++;

		ch=getch();

	cout<<ch<<"  -  "<<(int) ch<<endl;



		
	} while (ch !='q' && ch!='Q' && k<50);










cout<<endl<<endl<<endl;
}