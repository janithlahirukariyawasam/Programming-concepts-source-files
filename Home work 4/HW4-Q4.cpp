/*. Design a program that reads a value of N and then computes the THIRD smallest 
number in the next N elements of inputs. 

Janith Lahiru
IM/2019/081
Home Work 4


*/
#include <iostream>
using namespace std;

int main(){
	
	int N;
	cout<<"Please enter the 'N' \n ";    //Getting N
	cin>>N ;
	
	int array[N];
	
	for(int i=0; i<N; i++){
		cout<< "Enter the value "<<i+1<<"\n";     //getting user inputs and saving these data inside an array
		cin>>array[i];
	} 
	
   int i, j, min, temp;
   for (i = 0; i < N; i++) {
      min = i;
      for (j = i + 1; j < N-1; j++)           //Sorting array    if our array like --> [5,3,1,2,4]   this for for loop change it to   [1,2,3,4,5]
      if (array[j] < array[min])                //So we can access third smallest value as array[2]
      min = j;
      temp = array[i];
      array[i] = array[min];
      array[min] = temp;
   }
   
   
   cout<<"\n\n***********\nThird smallest value is\n";
   cout<<array[2];
}
