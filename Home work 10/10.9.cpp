/*



Janith Lahiru
IM/2019/081







*/
#include<iostream>
#include<string.h>
using namespace std;



int main()
{
	FILE *fptr1, *fptr2;
	char current, fname1[20], fname2[20]; 

	cout << "Please enter the file name -->\n ";
	cin >> fname1;

	fptr1=fopen(fname1, "r");
	
	if(fptr1==NULL)
	
	cout << "Please enter the new file name -->\n ";
	cin >> fname2;
	
	fptr2=fopen(fname2, "w");     //write
	if(fptr2==NULL)
	
	while(1)
	{
		current = fgetc(fptr1);
		if(current == EOF)
		{
			break;
		}
		else
		{
			fputc(current, fptr2); //copying to file
		}
	}
	cout << "The file " << fname1 << " copied as " << fname2 << endl;
	
	fclose(fptr1);
	fclose(fptr2);
	
	getchar();
}
