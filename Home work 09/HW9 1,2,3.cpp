
/*
1. Declare two (type double) pointer variables named d_var and d_array. Write C++ 
statements to dynamically create a double-precision floating-point variable and store its 
address in d_var. Also dynamically create an array of 10 double-precision floating-point 
values and store its address in d_array: 

2. Write C++ statements to input a value for d_var (i.e., a value that d_var points to) from the 
console and then display it: 

3. Write C++ statements to initialize the 10 double values in the dynamically allocated array to 
1.0. Now write C++ statements to de-allocate the memory (i.e. using the delete operator) 
pointed by d_var and d_array: 



Janith Lahiru
IM/2019/081


*/
#include<iostream>
using namespace std;


int main()
{
	//declaring two pointer variables
	double *d_var, *d_array ;
	
	//Dynamic Allocation
	d_var = new double;
	d_array = new double[10];

	//get input values for d_var
	cout << "Enter value: ";
	cin >> *d_var;
	cout << *d_var << endl;
	
	//initializing values for array
	for (int i=0; i<10; i++)
	{
		d_array[i] = 1.0;
	}
	//array output - Not necessary
	for (int i=0; i<10; i++)
	{
		cout << d_array[i];
	}
	
	//de-allocating
	delete d_var;
	delete []d_array;
}

