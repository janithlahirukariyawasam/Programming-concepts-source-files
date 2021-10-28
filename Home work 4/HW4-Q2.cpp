/*. Revise your program from question 1 so that now it computes only the average of 
those input items that are greater than 10.


Janith Lahiru
IM/2019/081
Home Work 4



*/

#include <iostream>
using namespace std;

int N;
double sum;    //Variable declaration
double value;

int main(){
	
	cout<<"Please enter the N\n";
	cin>>N;
	
	//This for loop only get value more than 10 and if user input less than 10 it doesn't calculate as a count also 
	for (int i = 0 ; i< N; i++){
		cout<<"Value "<<i+1<<"\n";
		cin>>value;
		if (value>10){
			sum = sum + value;
		}else{
			i--;
		}
		
	}
	//Output
	cout<<"\n\n***********\nAverage is "<<(sum/N);
	
}



