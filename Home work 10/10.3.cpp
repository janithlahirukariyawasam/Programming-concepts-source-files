/*



Janith Lahiru
IM/2019/081




/* 

Janith Lahiru
IM/2019/081

*/
#include<iostream>
#include<stdio.h>
using namespace std;


int main(){
	
	
	FILE*f;
	string line,s;
	int number;
	char i;
	
	
	cout<<"Pleaase enter the number of lines you want --> \n";
	cin>>number;											//getting user inputs.....
	cout<<"Enter the sentence to the file:";
	
	
	
	for(int i=0;i<number+1;i++){
		getline(cin,line);                //getting......
		s+=line+"\n";
	}
	
	f=fopen("text2.text","w");
	
	for(int i=0;i<sizeof(s);i++){
		fprintf(f,"%c",s[i]);
	}
	
	fclose(f);
	
	
	cout<<"Content (test2.txt) is --> \n";
	f=fopen("text2.text","r");
	
	
	while(fscanf(f,"%c",&i)!=EOF){
		cout<<i;
	}
	
	fclose(f);
	
}
