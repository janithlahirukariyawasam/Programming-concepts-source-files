/*



5. Write a function which will take pointer and display the number on screen. Take number 
from user and print it on screen using that function. 




IM/2019/081
Janith Lahiru
HW 8


*/


#include<iostream>
using namespace std;


void pointerPrinter(int *a){
	cout << *a << endl;           //pointer print function
}

int main(){

	int x;
	cout << "Enter number --> "; 
	cin >> x;
	
	pointerPrinter(&x);		//calling function 
	
}
