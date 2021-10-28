/*Write a program that inputs a line of text into char array s[ 100 ]. Output the line in 
uppercase letters and in lowercase letters.


IM/2019/081
HW 7 Q3



*/

#include <iostream>
#include <cctype> 
using namespace std;
char s[100];
char l[100];
char u[100];


int main(){
    cout<<"Please enter the text\n";
    cin.getline(s,100);

    for(int i=0; i<100; i++){
        char c = s[i];
        char b = tolower(c);
        l[i] = b;
        

    }
    cout<<"\n\nArray to lowercase --> \n";
     for(int i=0; i<100; i++){
        cout<<l[i];
        
    }

  for(int i=0; i<100; i++){
        char c = s[i];
        char b = toupper(c);
        u[i] = b;
        

    }
    cout<<"\n\nArray to Uppercase --> \n";
     for(int i=0; i<100; i++){
        cout<<u[i];
        
    }

}