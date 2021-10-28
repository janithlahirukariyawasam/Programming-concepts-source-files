 /*
 
 Janith Lahiru
 IM/2019/081
 Home Work 5
 Question    3
 
 
 Write function distance that calculates the distance between two points (x1, y1) and 
(x2, y2). All numbers and return values should be of type double*/

#include <iostream>
#include <cmath>

using namespace std;


	//Variable declaration
double xone;
double xtwo;
double yone;
double ytwo;

void distance(double xdifference,double ydifference){

	
	double yValue = pow((ydifference),2);
	double xValue = pow((xdifference),2);
	
	double sum = yValue + xValue;
	
	cout<<"\nDistance is --> "<<sqrt(sum);
}



int main(){
	

	
	
	//getting user inputs
	cout<<"Enter x 1\n";
	cin>>xone;
	cout<<"Enter x 2\n";
	cin>>xtwo;
	cout<<"\n\nEnter y 1\n";
	cin>>yone;
	cout<<"Enter y 2\n";
	cin>>ytwo;
	
	
	double xdiff = xone - xtwo;
	double ydiff = yone - ytwo;

	distance(xdiff,ydiff);
	

	
}


