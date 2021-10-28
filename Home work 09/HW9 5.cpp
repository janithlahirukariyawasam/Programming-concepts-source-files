/*
5. A user-defined structure named Timer has two integer parameters to initialize hour and 
minute members. Write a single C++ statement to create an object of the Timer structure 
using dynamic memory allocation and assign it to a pointer variable named timePtr. Assign 
values of 10 and 20 for hour and minute respectively.

*/

#include<iostream>
using namespace std;

struct Timer
{
	//variables
	int hr; 
	int min;
};

int main()
{
	
	Timer *timePtr = new Timer{10,20};
}
