/*
4. Write a program to print a number which is entered from keyboard using pointer. 

IM/2019/081
Janith Lahiru
HW 8

*/
#include<iostream>
using namespace std;

int main()
{
	int variable;
	
	cout << "Enter number: "; 
	cin >> variable;
	cout << *(&variable) << endl;
	
	return 0;
}
