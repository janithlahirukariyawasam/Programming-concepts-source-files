/*
2. Write a program to print the address of the pointer to a variable whose value is input 
from user

Janith Lahiru
IM/2019/081
HW 8



*/
#include<iostream>
using namespace std;

int main()
{
	//variables
	int a; 
	int *b; //pointer

	//user input and assign
	cout << "Enter number: "; 
	cin >> a;
	
	//assign address of a to b
	b = &a;
	
	//print the pointer address
	cout << "Address of the pointer to entered number: " << b; 	
	
	return 0;

}
