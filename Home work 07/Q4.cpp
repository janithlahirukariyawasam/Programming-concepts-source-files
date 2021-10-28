/*4. Write a program that uses function strcmp to compare two strings input by the user. 
The program should state whether the first string is less than, equal to or greater than 
the second string.


IM/2019/081
Janith Lahiru
HW 7



 */

#include <iostream>
#include <string.h>
using namespace std;


int main()
{
	char Array1[100];
	char Array2[100];


	cout<< "Enter the first String --> \n";
	cin.getline(Array1,100);
	cout<< "Enter the second String -->\n";
	cin.getline(Array2,100);


	int resultCode = strcmp(leftArray, rightArray);


	if(resultCode == 0)
	{
		cout<< "Strings are equal";
	}
	else if(resultCode < 0)
	{
		cout << "First string is less than the second string";
	}
	else
	{
		cout << "First string is greater than the second string";
	}
}



