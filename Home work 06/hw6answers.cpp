/*Problem Statement 

Home Work 6

Janith Lahiru
IM/2019/081


The purpose of this homework is to extend Assignment 1 Change Maker to act as a 
vending machine. 
 Directions 
1. Restrict denominations to 1, 2, 5, and 10. 
2. Restrict sales prices to not include cents. 
3. Ask for the amount tendered by denomination. That is, instead of entering a value 
such as Rs. 29, ask for how many 1s, 2s, 5s, and 10s. 
4. Do not display zero denominations. 
5. Real vending machines make repeated sales and maintain a reserve of coins stored 
inside the machine. Over time, the coin reserve can exceed its capacity or run out 
of a denominations of coins completely. If a denomination reserve exceeds it 
capacity; the excess simply goes into an overflow bin. If a denomination goes to 
low, smaller denominations can substitute for larger denominations that are 
empty. Eventually, it is possible that a “Insert correct change only” lamp must 
light, or that an “out of change” condition exists, in which case money may need 
to be returned to the customer. Convert your program to run in a loop, assume 
that 100 of each coin are preloaded, and make sales repeatedly until a 
denomination is empty. Continue until change cannot be made.





##########		SPECIAL		##########

I considered the maximum number of coins can be inside the reserve as 125 for each type of coins.


*/






#include <iostream>
using namespace std;

 //variables......
int reserve1 = 100;
int reserve2 = 100;       //variables for reserve                
int reserve5 = 100;
int reserve10 = 100;
int overflow1 = 0;
int overflow2 = 0;		//variables for overflow bins	
int overflow5 = 0;
int overflow10 =0;
	
	
	//reserve update function.......
int reserveUpdate(int balance, int R1,int R2, int R5, int R10){
	int remain;
	reserve1  += R1;
	reserve2 += R2;
	reserve5 = reserve5 + R5;
	reserve10 = reserve10 + R10;
	
	
	int  numTen = balance/10 ;
	remain = balance % 10;
  
 	int numfive = remain/5;                    
 	remain = remain %5;
  
	int numTwo = remain / 2;
 	remain = remain % 2;
  
	int numOne = remain;
 
 	reserve1 = reserve1 - numOne;
	reserve2 = reserve2 - numTwo;
	reserve5 = reserve5 - numfive;
	reserve10 = reserve10 -numTen;

	if (reserve1 > 125){
		overflow1 = reserve1 - 125;
		reserve1 = 125 ;
	}
	if(reserve2 > 125){
		overflow2 = reserve2 - 125;				//This conditional statement can be used to calculate the overflow.
		reserve2 = 125 ;
	}
	if(reserve5 > 125){
		overflow5 = reserve5 - 125;
		reserve5 = 125 ;
	}
	if(reserve10 > 125){
		overflow10 = reserve10 - 125;
		reserve10 = 125 ;
	}
	

 
}




void  printReserve(){
	cout<<"\n\nOne rupee coins "<<reserve1<<"\nnumber of Overflowed coins (One Rupee) -- > "<<overflow1<<"\n\n";
	cout<<"Two rupee coins "<<reserve2<<"\nnumber of Overflowed coins (Two Rupee) -- > "<<overflow2<<"\n\n";        //print reserve function
	cout<<"Five rupee coins "<<reserve5<<"\nnumber of Overflowed coins (Five Rupee) -- > "<<overflow5<<"\n\n";
	cout<<"Ten rupee coins "<<reserve10<<"\nnumber of Overflowed coins (Ten Rupee) -- > "<<overflow10<<"\n\n";
}


int getPayement(int productValue){
	
	int R1,R2,R5,R10;

	    cout<<"number of one ruppee coins\n";
		cin>>R1;
		cout<<"number of two ruppeee coins\n";
		cin>>R2;
		cout<<"number of 5 rupee coins\n";
		cin>>R5;
		cout<<"number of 10 rupee coins\n";
		cin>>R10;
		
		int payement = R1 + R2*2 + R5*5 + R10*10;
	
		if(payement<productValue){                                                                             //getPayement function
			cout<<"\n\n##########\nOops !....\nLow payement.......Please enetr Value Again....\n\n";
		
	               	getPayement(productValue);
			
			
			
		}else if(payement>productValue){
			cout<<"\n\nBalance is "<<(payement-productValue)<<"\n";
			reserveUpdate((payement-productValue),R1,R2,R5,R10);
			
			
		}else{
			cout<<"\n\nThank you\n";
			reserveUpdate(0,R1,R2,R5,R10);   //done
			//printReserve();
		}
}


int main(){
	
	 while( reserve1>0 && reserve2>0 && reserve5>0 && reserve10>0){
	 
	
	
	int product;
	int payement;
	cout<<"\n\n\n   Wellcome !\n================\n\n";
	cout<<"Product A --> enter 1\nProduct B --> enter 2\nProduct C --> enter 3\nProduct 4 --> enter 4\n    OR\nTo Admin Option Please enter the Password......\n\n\n";
	cin>>product;
	
	
	
	if(product==1){
		cout<<"The price of Product A is 20\nPlease enter your payement......\n\n";
		getPayement(20);
		
				
	}else if(product == 2){
		cout<<"The price of Product B is 30\nPlease enter your payement......\n\n";
		getPayement(30);
		                                                                                                   //getting user inputs and calling functions
	}else if(product == 3){
		cout<<"The price of Product C is 40\nPlease enter your payement......\n\n";
		getPayement(40);
		
	}else if(product == 4){
		cout<<"The price of Product D is 50\nPlease enter your payement......\n\n";
		getPayement(50);
		
	}else if(product==12345){
		int command;
		cout<<"\n\nEnter 1 to show reserve \nEnetr 2 to stop machine\n";
		cin>>command;
		
		if(command==1){
			printReserve();
		}else if(command ==2){
			cout<<"Machine is stopped.....\n";
			return 0;
		}else {
			cout<<"Invalid user input....\n";
		}
	
	}
	
	else{
		cout<<"\n\n**************Incorrect User Input.....\nPlease enter a corect product number\n**************\n\n";
	}
	
	
	
}
	
}
