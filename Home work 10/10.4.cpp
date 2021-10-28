/*



IM/2019/081
Janith Lahiru



*/
#include<iostream>
#include<string.h>


using namespace std;


int main(){
	
	FILE*fptr;
	char word[100],copy[100],filename[100];				//variables.......
	int c;
	
	cout<<"Please enter the file you want to open --> \n";
	scanf("%s",filename);
	
	fptr=fopen(filename,"r");
	fscanf(fptr,"%s%d",copy,&c);
	cout<<"Content of the file -->\n";
	
	
	while(!feof(fptr)){
		cout<<copy<<""<<c<<endl;
		fscanf(fptr,"%s%d",copy,&c);
	}
	
	
	fclose(fptr);
	
}
