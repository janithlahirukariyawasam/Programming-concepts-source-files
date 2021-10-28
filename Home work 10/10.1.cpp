/*
Janith Lahiru 
IM/2019/081





*/
using namespace std;
#include<iostream>



int main()
{
	FILE*filePointer;
	char output[10000];
	
	
	filePointer=fopen("output.txt","w");
	
	cout<<"What you want to output?";
	fgets(text,sizeof(output),stdin);
	fprintf(filePointer,"%s",output);
	fclose(filePointer);
}
