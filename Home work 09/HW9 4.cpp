
/*

4. Write a program in C to find the largest element using Dynamic Memory Allocation 
Test Data :  
Input total number of elements(1 to 100): 5  
Number 1: 5  
Number 2: 7  
Number 3: 2  
Number 4: 9  
Number 5: 8 
Expected Output : 
The Largest element is :  9.00  





Janith Lahiru
IM/2019/081



*/

#include<iostream>
#include<stdlib.h>   
using namespace std;



int main()
{
	//variables
	int n, temp;   
    double *data;
    
    //get the number of elements
    cout << "Input total number of elements (1 to 100): ";
    cin >> n;
    cout << endl;
    
    //allocates space in memory for n number of elements each with size of double
    data = (double *) calloc(n, sizeof(double)); //calloc-allocates a block of memory for an array
    
	//getting user inputs   
    for(int i=0; i<n; i++)
    {
    	cout << "Number " << i+1 << ": "; 
    	cin >> *(data+i);
	}
	
	//output array of user inputs - not necessary
    for(int i=0; i<n; i++)
    {
    	cout << *(data+i) << " " ;
    }
    cout << endl;
    
    //sorting
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
    	{
            if(*(data+i) > *(data+j))
            {
            	//swap
                temp = *(data+i);
                *(data+i) = *(data+j);
                *(data+j) = temp;
            }
        }
    }
    
    //diplay sorted array - not necessary
    for(int i=0; i<n; i++)
    {
    	cout << *(data+i) << " ";
    } 
    //Display largest element (last element of the sorted array)
    cout << "\nThe Largest element is: " << *(data+n-1);

} 
