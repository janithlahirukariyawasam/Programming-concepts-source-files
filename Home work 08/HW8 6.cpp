/*



6. Write a program to find out the greatest and the smallest among three numbers using 
pointers. 





IM/2019/081
Janith Lahiru
HW 8



*/
#include<iostream>
using namespace std;

int main()
{
	//variables
    int a;
	int b;
	int c;

	//pointers
    int *p1;
	int *p2;
	int *p3; 
    

    //getting inputs
    cout << "Enter first Number: ";
    cin >> a;
	cout << "Enter second Number: ";
    cin >> b;
    cout << "Enter third Number: ";
    cin >> c;
	
	//assign addresses 
    p1 = &a;
    p2 = &b;
    p3 = &c;


    
    // greatest value
    if (*p1 > *p2){
		if (*p1 > *p3){
			cout << "Greatest --> " << *p1 << endl;
		}else{
			cout << "Greatest --> " << *p3 << endl;
		}
	}else{
		if (*p2 > *p3){
			cout << "Greatest --> " << *p2 << endl;
		}else{
			cout << "Greatest --> " << *p3 << endl;
		}
	} 


	//smallest
   if (*p1 < *p2){
		if (*p1 < *p3){
			cout << "Smallest --> " << *p1 << endl;
		}else{
			cout << "Smallest --> " << *p3 << endl;
		}
	}else{
		if (*p2 < *p3){
			cout << "Smallest --> " << *p2 << endl;
		}else{
			cout << "Smallest --> " << *p3 << endl;
		}
	} 

   
  
}
