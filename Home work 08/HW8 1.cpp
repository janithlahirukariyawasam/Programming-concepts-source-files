/*
1. Write a program to print the address of a variable whose value is input from user

IM/2019/081
Janith Lahiru
HW 8

*/
#include<iostream>
using namespace std;

int main()
{
	int variable; //variable

	//user input
	cout << "Enter number: "; 
	cin >> variable;
	
	//address 
	cout << "Address of the entered number --> " << &variable; 
	
	return 0;

}
