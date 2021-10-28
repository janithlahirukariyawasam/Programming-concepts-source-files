
/*

9. Write a program to store n elements in an array and print the elements using pointer





IM/2019/081
Janith Lahiru
HW 8









*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	int arr[n];
	int *pointer=arr;  //pointed to arr[0]
	
	cout << "Enter size of the Array: ";
    cin >> n;
    
    //user inputs for array elements
    for (int i=0; i<n; i++)
    {
    	cout << "Enter element: ";
    	cin >> arr[i];
	}
	
	//display array
    for (int j=0; j<n; j++)
    {
    	cout << *pointer; 	//print value poined by the pointer
    	pointer++ ;		//move pointer to next element
	}	
	
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
