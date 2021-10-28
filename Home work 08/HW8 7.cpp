/*

7. Write a program to find the factorial of a number using pointers. 


IM/2019/081
Janith Lahiru
HW 8

*/
#include<iostream>
using namespace std;

//function to calculate factorial
void factorial(int a, int *b)
{
	*b = 1;
		for (int i=1; i<=a; i++){
    	*b *= i;
	}
}

int main()
{
	int fact, num;
	
	//user input
	cout << "Enter Number: ";
    cin >> num;
    
    //function call
    factorial(num, &fact);
    
   	cout << "Factorial of " << num << " is " << *(&fact) << endl;
    
}
