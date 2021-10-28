/*

Janith Lahiru
IM/2019/081








*/
#include<iostream>
#include<string.h>
using namespace std;



int main()
{
    FILE *fptr1;
	FILE *fptr2;
    char current;
	char filename[50];
    int del;
	int line;
    
	//Selecting the file to open
	cout <<"Please enter the name of file you want to enter --> \n";
	cin >> filename;
    
    //get user input for the line to be deleted	
    cout << "Please enter the line number you want to delete --> \n";
    cin >> del;
    
    &del;
    
    //open files
    fptr1 = fopen(filename, "r");		//file to read
    fptr2 = fopen("temp.txt", "w"); 	//open a temparory file in write mode
    
    //read the file
	fscanf(fptr1,"%s %d", current);
    
    if(current != EOF) 
	{
		line = 1;
	}
	
	//copy and paste the text except the one to be deleted in temp file.
    while(1)
	{
		if(del != line)
    	{
    		putc(current, fptr2);
		}
	  	//read until finds new line character
		current = getc(fptr1);
	  

		if(current =='\n')
		{
			line++;	
		}
		if(current == EOF)
		{
			break;
		}
    }
    
    fclose(fptr1);
    fclose(fptr2);
}
