/*

Janith Lahiru
IM/2019/081


*/
using namespace std;
#include<iostream>


int main(){
	FILE*fptr;
	char fname[20];  //variables
	char str;
	
	
	
	cout<<"Please enter the name of file -->\n";	//getting the name of file
	cin>>fname;
	
	fptr=fopen(fname,"r");
	
	if(fptr==NULL){
		cout<<"File does not exist or cannot be opened\n";
		exit(0);
	}
	
	cout<<endl<<"The Contents "<<fname<<"is:"<<endl;
	
	str=fgetc(fptr);
	
	while(str!=EOF){
		printf("%c",str);		//while loop
		str=fgetc(fptr);
	}
	
	fclose(fptr);
}
