/*
3. Write a program to print the value of the address of the pointer to a variable whose 
value is input from user. 


IM/2019/081
Janith Lahiru
HW 8

*/
#include<iostream>
using namespace std;

int main()
{
	int a;
	int  *b;
	
	cout << "Enter number\n "; 
	cin >> a;
	b = &a;
	
	cout << "Value of the address of the pointer " << a << " is --> " << *(&a) << "\n";
	
	return 0;
}
