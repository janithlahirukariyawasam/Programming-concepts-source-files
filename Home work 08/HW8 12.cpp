/*

12. Write a program in C to sort an array using Pointer


IM/2019/081
Janith Lahiru
HW 8







*/

#include<iostream>
using namespace std;

void sorting(int num, int *pointer)
{
	int temp;
	int i;
	
	//sorting
	for (i=0; i<num; i++){
		for (int j=i+1; j<num; j++){
			if (*(pointer+i) > *(pointer+j)){
				//swap
				temp = *(pointer+i);
				*(pointer+i) = *(pointer+j);
				*(pointer+j) = temp;
				
			}
		}
	}
	
	//printing
	for (i=0; i<num; i++){
		cout << *(pointer+i) <<" ";
	}
}

int main()
{
	int array[] = {8,14,3,69,20}; 
	int v= sizeof(array)/sizeof(array[0]);
	sorting(v, array);
	
}
