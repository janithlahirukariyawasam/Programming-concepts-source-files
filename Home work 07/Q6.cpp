#include<iomanip>
#include <iostream>
using namespace std;


int cityNumReturner(char letter);
int distances(int current, int dest);


int main()
{
	bool userExited = false;
	char currentDist;
	char yesNo;
	int totalDist = 0;
	int current = 0;
	int dest = 0;



	cout <<setw(4) << "A" <<setw(3)<<"B" <<setw(3) <<"C" <<setw(3) <<"D" << "\n\n";
	cout << "A" <<setw(3) << "0" <<setw(3) << "1" <<setw(3) << "2" <<setw(3) << "3" << "\n\n";
	cout << "B" <<setw(3) << "1" <<setw(3) << "0" <<setw(3) << "1" <<setw(3) << "2" << "\n\n";
	cout << "C" <<setw(3) << "2" <<setw(3) << "1" <<setw(3) << "0" <<setw(3) << "1" << "\n\n";
	cout << "D" <<setw(3) << "3" <<setw(3) << "2" <<setw(3) << "1" <<setw(3) << "0" << "\n\n";
	cout << "Enter the starting city letter: ";
	cin >> currentDist;
	current = cityNumReturner(currentDist);


    
	do
	{
		cout<< "Select the destination : ";
		cin >> currentDist;
		dest = cityNumReturner(currentDist);
		cout<< "Wish to travel more ? (y/n): ";
		cin >> yesNo;
		totalDist += distances(current, dest);
		current = dest;
		if(yesNo == 'n')
		{
			userExited = true;
		}
		
	}
	while(!userExited);
	
	cout << "The total distance is = " <<totalDist;
}

int distances(int current, int dest)
{
	int distanceArr[4][4] = {{0,1,2,3},{1,0,1,2},{2,1,0,1},{3,2,1,0}};
	int distance = distanceArr[current][dest];
	return distance;
}


int cityNumReturner(char letter)
{
	switch(letter)
	{
		case 'A':
			return 0;
			break;
		case 'B':
			return 1;
			break;
		case 'C':
			return 2;
			break;
		case 'D':
			return 3;
			break;
		default :
			return 0;
	}
}

