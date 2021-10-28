/*





Janith Lahiru
IM/2019/081










*/
#include<iostream>
#include<string.h>
using namespace std;


int main()
{
	
	
	
	
	FILE *file1;
	FILE *file2;
	FILE *fnew;
	char current;
	char fname1[20];
	char fname2[20];
	char fname3[30];
	
	
	
	//getting user inputs
	cout << "Please enter the first file name  --> \n";
	cin >> fname1;
	
	cout << "Please enter the second file name --> \n ";
	cin >> fname2;
	
	cout << "Name of the new file(with mege two fils) -->";
	cin >> fname1;




	//reading mode
	file1 = fopen(fname1, "r");
	file2 = fopen(fname2, "r");


	
	//check for the existence
	if(file1==NULL || file2==NULL)
	{
		printf(" File does not exist or error in opening...!!\n");
		exit(EXIT_FAILURE);
	}
	
	//writing mode
	fnew=fopen(fname3, "w");
	
	
	
	//check for errors of existence
	if(fnew == NULL)
	{
		printf(" Error!!\n");
		exit(EXIT_FAILURE);
	}
	
	//merging
	while((current=fgetc(file1)) != EOF)
	{
		fputc(current, fnew);
	}
	while((current=fgetc(file2)) != EOF)
	{
		fputc(current, fnew);
	}
	//display
	cout << "The two files merged into " << fname3 << " successfully...!!";
	
	fclose(file1);
	fclose(file2);
	fclose(fnew);
}
