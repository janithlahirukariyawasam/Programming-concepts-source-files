/* Design a program that reads a value of N and then computes the smallest and the 
largest numbers in the next N elements of inputs.


Janith Lahiru
IM/2019/081
Home Work 4



 */


#include <iostream>

int main(){
	int num = 0;
	
	int y = 0;
	
	std::cout<<"enter the number of user input....\n";
	std::cin>>num;
	int data[num];
	for(int i=0; i<num; i++)
	{
	   std::cout<<"Enter the value "<<i+1<<"\n";
	   std::cin>>y;
	  data[i]=y;
	
   }
   int smallest = data[0];
	int largest = data[0];
   for(int i = 0; i<num; i++){
   	if(data[i]<=smallest){
   		smallest = data[i];
	   }
	   
	if(data[i]>largest){
		largest = data[i];
	}   
   }
   
   std::cout<<"\n\nlargest -->  "<<largest<<std::endl;
   std::cout<<"Smallest -->  "<<smallest; 
	   
}
