/*

10. Write a program to Calculate the length of the string using a pointer 

IM/2019/081
Janith Lahiru
HW 8

*/
#include<iostream>
using namespace std;



int main()
{
	char s[200];
	char *str = s; 
	int length = 0; 
	
	cout << "Enter the String --> ";
    cin >> s;
    
    //loop to calculate lenght
	while ( *(str++) != '\0' ){
    	length++ ;
	}
    
    cout << "Length of the text '" << s << "' is " << length;
}



