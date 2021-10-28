/*Design a program that reads a value of N and then compute the average of the Next 
N elements of inputs.




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
	
	//for loop calculate sum
	for (int i = 0 ; i< N; i++){
		cout<<"Value "<<i+1<<"\n";
		cin>>value;
		sum = sum + value;
	}
	
	cout<<"\n\n***********\nAverage is "<<(sum/N);
}
