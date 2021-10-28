/*


Janith Lahiru
IM/2019/081










*/
#include<iostream>
#include<string.h>
using namespace std;



int main(void) 
{
	FILE *fptr1;
	FILE *fptr2; 
    char filename[50];
    char current;
	char newline; 
    int rep;
	int  temp; 
    
   
	cout << "Please enter the file name to opened --> \n ";
	cin >> filename;
	

    cout << "Please enter the line to be replaced --> \n";
    cin >> rep;
    &rep;
	
	cout << "Please enter the content of the new line -->";
	cin >> newline;
	
    fptr1 = fopen(filename, "r");	    //open file in read mode

    current = getc(fptr1);
    
    //print file......... 
    while (current != EOF) 
	{
        printf("%c", current);
    	current = getc(fptr1);
    }
    
    //take pointer to start.
    rewind(fptr1);
    
    fptr2 = fopen("temp.txt", "w");	//open a temparory file in write mode
    
    current = getc(fptr1);
    
        while (current != EOF) 
		{
			if (current == ' ') 
			{
				temp++;
			}
		
        //copy and paste the text in temp file up to the line to be replaced.
        if (temp != rep)
		{
        	putc(current, fptr2);
        }
        else //line to be replaced
        {
            while ((current = getc(fptr1)) != ' ') 
			{
            }
           
            fflush(stdin);
            putc(' ', fptr2);  //space
            
            while ((current = getchar()) != ' ')
			{
                putc(current, fptr2);
                //replace 
                fputs(" ", fptr2);
                temp++;
            }
            
            current = getc(fptr1);
        }
        
        //close both files
        fclose(fptr1);
        fclose(fptr2);
    
        return 0;
} 
}
