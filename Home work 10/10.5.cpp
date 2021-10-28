/*


Janith Lahiru
IM/2019/081

*/



#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
	
	FILE *fptr;
	char word[100];
	char copy[100];		//variables
	char filename[100];
	int c,count=0;
	
	cout<<"Please enter the file you want to open --> \n";
	scanf("%s",filename);

	fptr=fopen(filename,"r");
	
	fscanf(fptr,"%s %d",copy,&c);
	cout<<"content of the file --> \n";
	
	
	while(!feof(fptr)){
		count++;
		fscanf(fptr,"%s%d",copy,&c);
	}
	
	fclose(fptr);
	cout<<"The number of lines is --> "<<count<<endl;
	
	
}
