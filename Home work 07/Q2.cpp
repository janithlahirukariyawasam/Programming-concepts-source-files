/*
2. Airline Reservations System

A small airline has just purchased a computer for its new automated reservations 
system. The president has asked you to program the new system. You are to write a 
program to assign seats on each flight of the airline's only plane (capacity: 10 seats). 
Your program should display the following menu of alternatives: 
Please type 1 for "first class" 
Please type 2 for "economy" 
If the person types 1, then your program should assign a seat in the first class section 
(seats 1-5). If the person types 2, then your program should assign a seat in the 
economy section (seats 6-10). Your program should then print a boarding pass 
indicating the person's seat number and whether it is in the first class or economy 
section of the plane. 
Use a single-subscripted array to represent the seating chart of the plane. Initialize all 
the elements of the array to 0 to indicate that all seats are empty. As each seat is 
assigned, set the corresponding elements of the array to 1 to indicate that the seat is no 
longer available. Your program should, of course, never assign a seat that has already 
been assigned. When the first class section is full, your program should ask the person 
if it is acceptable to be placed in the economy section (and vice versa). If yes, then 
make the appropriate seat assignment. If no, then print the message "Next flight leaves 
in 3 hours." */


#include <iostream>
using namespace std;

int main(){
    


        int type;
        int seats[10];
        string customerName;
        string classType;
        int seatNumber = 0;
        int i = 0;
 
    
    
    
    while(true){
        cout<<"\n\n\n####   Automated Reservation System   ####\n\n\n\nWhat is your name ?\n";
        cin>>customerName;
        cout<<"Please type 1 for --> first class.\nPlease type 2 for --> economy\n\n";
        cin>>type;


        if(type==1){

                if(seatNumber==5){
                    string enter;
                    cout<<"All are filled in first class.....\n";
                    cout<<"we can allocate a seat from economic class \nif you want please enter 'YES' ( Capital Letters )";
                    cin>>enter;
                    if(enter == "YES"){
                         seats[i] = 1;
                         classType = "Economy"; 
                         seatNumber = i+1;
                         i = i+1;
                    }else{
                        cout<<"####   Invalid Input   ####\n";
                 }
        


                }else{
                seats[i] = 1;
                classType = "First Class";
                seatNumber = i+1;
                i = i+1;
                }
                
            
        }else if(type == 2){
        
                seats[i] = 6;
                classType = "Economy"; 
                seatNumber = i+1;
                i = i+1;
            
        }else{
            cout<<"####   Invalid Input   ####\n";
        }
        

        cout<<"##### Sri lankan Air Lines ####\n\n\n\nCustomer name --> "<<customerName<<"\nClass --> "<<classType<<"\nSeat number --> "<<seatNumber<<"\n\n\n\n\n\n\n\n";

        if(seats[9] == 1 ){
            cout<<"All seats are reserved !";
            break;
        }





    }



}