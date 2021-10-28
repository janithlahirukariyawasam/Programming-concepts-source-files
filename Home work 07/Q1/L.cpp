/*l) Write a statement that totals the elements of the fourth column of t. 
Janith Lahiru
IM/2019/081

*/


#include <iostream>
using namespace std;

int main(){

    int t[2][5];
    cout<<"Please enter the values\n";
     for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            cin>>t[i][j];
        }
    }

  

    cout<<"\n\ntotals the elements of the fourth column of t.  \n ";
        int sum =0;
         for(int j=0; j<2; j++){   
            sum = sum + t[j][3];
        }
        cout<<"\n\n"<<sum<<endl;
}