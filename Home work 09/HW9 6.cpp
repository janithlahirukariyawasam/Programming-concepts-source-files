/*

6. Letter Frequency 
Write a function that will take a string and return a count of each letter in the string. For 
example, "my dog ate my homework" contains 3 m's, 3 o's, 2 e's, 2 y's and one each of d, g, 
a, t, h, w, r and k. 
Your function should take a single string argument and return a dynamically allocated array 
of 26 integers representing the count of each of the letters a - z respectively. Your function 
should be case insensitive, i.e., count ‘A’ and ‘a’ as the occurrence of the letter ‘a’. Do not 
count non-letter characters (i.e., spaces, punctuation, digits, etc.) Write a program that will 
take a string from the user using cin, call your letter frequency function and print out the 
frequency of each letter in the string. Do not list letters that do not occur at least once. 
Example: 
Enter a string: “my dog at my homework” 
Letter frequency 
a 1 
d 1 
e 1 
g 1 
h 1 
k 1 
m 3 
o 3 
r 1 
t 1 
w 1 
y 2 
 


	Janith Lahiru
	IM/2019/081
*/


#include<iostream>
#include<cstring>
using namespace std;


int *count;


void lFrequency(string str)
{
	//array with 26 integers
	count = new int[26] {0};
	int x;
	
	//loop to count characters
	for (int i=0; i<str.length(); i++)
	{
		x = toupper(str[i])-65;               //(ASCII VALUE FOR 'A' IS NUMBER 65)
		*(count+x) = *(count+x) + 1 ;
	}
}

int main()
{
	string str;
	
	cout << "Enter String: ";
	getline(cin, str) ;
	
	//lFrequency function call
	lFrequency(str);
	
	//printing
	for (int i=0; i<26; i++)
	{
		if (count[i] > 0)
		{
			cout << char(i+65) << ": " << count[i] << endl;
		}
	}
	delete []count;
}
