/* 

Janith Lahiru
IM/2019/081
HomeWork 5


Question  4

The Fibonacci sequence is a sequence of numbers such that the first and second 
numbers are 0 and 1 respectively, and each number after the second is the sum of its 
two predecessors. Design a recursive function that take a positive value of N as 
input, and outputs the first N elements of the Fibonacci series. */

#include <iostream>
using namespace std;

int fibionacciFunction(int n);     //inside the fibionacci function we use this again so we need to declare function like this




int main(){
	int value; //   Getting    N
	cout<<"Enter the N\n";
	cin>>value;
	cout<<"\n\nAnswers.....\n";
	
	
	for(int i =0 ; i< value; i++){
		cout<<fibionacciFunction(i)<<"  ";
	}
	
}

//function
int fibionacciFunction(int n){
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else{
		return (fibionacciFunction(n-1) + fibionacciFunction(n-2));
	}
}
