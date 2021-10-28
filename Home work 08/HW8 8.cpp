
/*

8. Write a program to reverse the digits a number using pointers

IM/2019/081
Janith Lahiru
HW 8



*/
#include<iostream>
using namespace std;

int main()
{
	//variables
	int num;
	int remainder;
	int reverse=0;
	int *n;
	
	cout << "Enter a value --> ";
    cin >> num;
    n = &num; //assign the address
    
   
	while (*n != 0)
    {
    	remainder = *n % 10; 	//get the last digit 
    	reverse = reverse * 10 + remainder; 
    	*n /= 10; //the rest of the digits
	}
	cout << "Reversed: " << reverse << endl;
	   
}
