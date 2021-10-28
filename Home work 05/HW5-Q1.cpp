/*



Janith Lahiru
IM/2019/081
Home Work 5


Question 1

Write a function integerPower( base, exponent ) that returns the value of baseexponent 
For example, integerPower( 3, 4 ) = 3 * 3 * 3 * 3. Assume that exponent is a 
positive, nonzero integer, and base is an integer. Function integerPower should use 
for to control the calculation. Do not use any math library functions

*/
#include <iostream>
using namespace std;

//Variable declaration and flag is for while loop.
bool flag = true;
int base;
int exponent;

//integerPower function
void integerPower(int number1,int number2){
	int sum = 1;
	for(int i=0; i< number1; i++){
		sum = sum*number2;
	}
	if(sum>0 && number1>0 && number2>0){
		cout<<"\n\n***********\nAnswer --> "<<sum<<"\n";
		flag = false;
	}else{
		cout<<"Oops....\nPlease enter valid numbers...\n\n";
	}
	
}


int main(){
	while(flag){
	
	cout<<"Enter the base\n";
	cin>>base;
	cout<<"Enter exponent? \n";
	cin>>exponent;
	
	//calling the function and parsing arguments to the parameters.
	integerPower(exponent,base);
	
	
}


}
