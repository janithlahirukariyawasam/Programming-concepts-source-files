/*h) Write a nested for statement that initializes each element of t to zero.
Janith Lahiru
IM/2019/081
*/



#include <iostream>
using namespace std;

int main(){

    int t[2][5];
     for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            t[i][j] = 0;
        }
    }

    cout<<t[1][2];
}