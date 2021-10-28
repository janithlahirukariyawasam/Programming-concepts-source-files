 /*Design a function to compute the smallest common factor of two integers read from 
input data.

Janith Lahiru
IM/2019/081
Home Work 4


*/

#include <iostream>
using namespace std;



int smallestCommonFactor(int x, int y);


int main() {
int N1, N2, smallest_cf;


cout<<"Enter first value : ";
cin>>N1;
cout<<"Enter second value : ";
cin>>N2;


smallest_cf = smallestCommonFactor(N1, N2);

cout<<"Smallest common factor is : "<<smallest_cf;

return 0;
}



int smallestCommonFactor(int x, int y) {
 
 int scf; 
 for(int i=2; i<=x && i<=y; i++){
 if(x % i == 0 && y % i == 0){
 scf = i;
 break;
 }
 }
 return scf;
}


