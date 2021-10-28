/*5. Write a program that inputs several lines of text and uses strtok to count the total 
number of words. Assume that the words are separated either by spaces or newline 
characters. 

Janith Lahiru
IM/2019/081



*/

#include<iostream>
#include<string.h>
using namespace std;

int main ()
{
  char stringHolder[1000];
  cout << "Enter the text. : ";
  cin.getline(stringHolder,1000);
  char *separateCharacters;
  separateCharacters = strtok(stringHolder,"\n ");



  int count = 0;
  while(separateCharacters != NULL)
  {
  	count ++;
  	separateCharacters = strtok(NULL,"\n ");
  }
  cout << count;
  return 0;
}