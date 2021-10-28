/*Design a function to compute the greatest common divisor of two integers read 
from input data.


Janith Lahiru
IM/2019/081
Home Work 4


*/


#include <iostream>
using namespace std;

int greatestCommonDevisor(int x, int y){
 
   int gcd;
 	for(int i=1; i<=x && i<=y; i++){                 //greatest common devisor function
 	if(x % i == 0 && y % i == 0)
	 gcd = i;
 	}
   return gcd;
}


int main() {
int first;
int second;   //Variable declaration
int gcd;


cout<<"Enter first value:\n";
cin>>first;                           //Getting user inputs
cout<<"Enter second value:\n";
cin>>second;


gcd = greatestCommonDevisor(first, second);
cout<<"\n\n***************\nGreatest common devisor is ---> "<<gcd;
return 0;
}































