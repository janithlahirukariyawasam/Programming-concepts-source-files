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
	char copy[100];
	char filename[100];			//Variables........
	int c;
	int count=0;
	int i;
	int totChar;
	int totInt;
	
	cout<<"Please enter the file you want to open --> ";
	scanf("%s",filename);

	fptr=fopen(filename,"r");
	
	fscanf(fptr,"%s %d",copy,&c);

	while(!feof(fptr)){
		
		count++;
		
		for(i=0; copy[i] != '\0'; i++){
	        if(copy[i]!=' ')
	        {
	            totChar++;
	        }
    	}
    	
    	
    	while(c/10!=0){
    		totInt++;
		}
		totInt++;
		fscanf(fptr,"%s %d",copy,&c);
	}
	
	fclose(fptr);
	cout<<"Words count --> "<<count<<endl;
	cout<<"Character count --> "<<totChar+totInt<<endl;
}
