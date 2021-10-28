/*
i) Write a statement that inputs the values for the elements of t from the terminal. 
Janith Lahiru
IM/2019/081

*/
#include <iostream>
using namespace std;

int main(){


    
    cout<< "Write a statement that inputs the values for the elements of t from the terminal.\n";
    int t[2][5];
    cout<<"Please enter the values\n";
     for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            cin>>t[i][j];
        }
    }
    cout<<"\nPrinting array......\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            cout<<t[i][j]<<endl;
        }
    }




}