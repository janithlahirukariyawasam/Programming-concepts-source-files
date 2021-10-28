/*

11. Write a program to count the number of vowels and consonants in a string using a 
pointer 


IM/2019/081
Janith Lahiru
HW 8


*/
#include<iostream>
using namespace std;
//VOwELS
//Assume that text is not seperated by spaces, tabs, etc.

int main()
{
	char s[200];
	char *str = s; //pointed to first character
	int length = 0; //count of characters is 0
	int v=0;
	int c=0;
	
	cout << "Enter any text: ";
    cin >> s;
    
    //loop to calculate lenght
	while ( *(str++) != '\0' ){
    	if(*str=='a' || *str=='A' || *str=='e' || *str=='E' || *str=='i' || *str=='I' || *str=='o' || *str=='O' || *str=='u' || *str=='U'){
    		v++;
		}else{
			c++;			
		}
    	length++ ;
	}
    
    cout << "Number of vowels in the text '" << s << "' is " << v << "\n";
    cout << "Number of constants in the text '" << s << "' is " << c << "\n";
}



