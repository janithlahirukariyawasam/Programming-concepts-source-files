/*.

Janith Lahiru
IM/2019/081
Home Work 5

Question     2


Write a function that takes the time as three integer arguments (for hours, minutes, 
and seconds), and returns the number of seconds since the last time the clock “struck 
12.” Use this function to calculate the amount of time in seconds between two times, 
both of which are within one 12-hour cycle of the clock.*/


#include <iostream>
using namespace std;


int hours;
int minutes;         //getting first time
int seconds;

int hours2;
int minutes2;        //getting second time
int seconds2;

bool flag = true;


//calculate function
void calculate(int h, int m , int s ,int h2 , int m2, int s2){
	

	if(h<25 && m <60 && s<60 ){
		
    	if(h>11){
			int newHours = h - h2;
			int newm = m - m2;
			int news = s - s2;
			int total = newHours * 60*60 + newm * 60 + news;
			cout<<"Answer is --> "<<total<<"\n";
		}else{
		
			int newTotal = h * 3600 + (m-m2) * 60 + (s-s2);
			cout<<"Answer is --> "<<newTotal<<"\n";
		
		}
		
	}else{
		cout<<"Please enter correct order.....\n\n\n1 . minutes < 60\n2.seconds < 60\n3.Hours < 25  ";
	}

	

}











int main(){
	
	
		
	
	
 int software;   //this will chose what software you need wheather it is seconds betwwen two times or seconds since last time 12 struck 
 cout<< "To calculate seconds between 2 times \nenter 1\n\n\nTo calculate seconds since the last time the clock struck  12\nPlease enter 2\n\n ";
 cin>>software;
	
	
	
	if(software == 2){
		
    while(flag){
	
		cout<<"Enter the hours (Please follow digital type 3PM --> 15 )\n";
		cin>>hours;
		cout<<"Enter the minutes (0 to 59)\n";                                          //Getting user inputs......................
		cin>>minutes;
		cout<<"Enter the seconds (0 to 59)\n";
		cin>>seconds;
	
	
	
		//function call to get seconds between last time clock struck
		calculate(hours,minutes, seconds,12,0,0);
	
	}
	
}else{
	
	while(flag){   
	
		cout<<"Enter the hours (Please follow digital type 3PM --> 15 )\n";
		cin>>hours;
		cout<<"Enter the minutes (0 to 59)\n";
		cin>>minutes;
		cout<<"Enter the seconds (0 to 59)\n";
		cin>>seconds;                                                                      //Getting user inputs...........................
		cout<<"\n\n\n******Enter the Second time******\n";
		cout<<"Enter the hours (Please follow digital type 3PM --> 15 )\n";
		cin>>hours2;
		cout<<"Enter the minutes (0 to 59)\n";
		cin>>minutes2;
		cout<<"Enter the seconds (0 to 59)\n";
		cin>>seconds2;
		
	
		//function to get seconds between two times.....
		calculate(hours,minutes, seconds,hours2,minutes2,seconds2);
	
	}
	
	
 }

  
}



