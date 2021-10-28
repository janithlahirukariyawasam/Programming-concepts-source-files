
/*



		JANITH LAHIRU KARIYAWASAM
		IM/2019/081
        Assignment 1 
        Due date: 23rd August 2021 
		Programming Concept


*/

#include <iostream>

int main()
{
  int valueOfPurchase = 0; //price of the purchase..
  int valueOfPayement = 0; //payement made by the customer..
  int balance = 0; //balance that owner need to give to the customer..
  int remain = 0; // remain value after divide
  
  int numFiveThousend = 0 ;
  int numTwoThousend = 0;
  int numThousend;
  int numFiveHundred;
  int numHundred;                       //variable declaration asign 0 as initial value to the number of coins and papers...
  int numFifty;
  int numTwenty;
  int numTen;
  int numFive;
  int numTwo;
  int numRupee;
  
  
  
  // Outputs massages and getting user inputs..
  std::cout << "What is the value of purchase ?" <<std::endl;
  std::cin >> valueOfPurchase;
  std::cout << "What is the Payement made by customer ?" <<std::endl;
  std::cin >> valueOfPayement;
  balance = valueOfPayement - valueOfPurchase;
  std::cout<<"\n";
  std::cout << "***   balance is "<<balance<<"   ***"<<std::endl;
  
  
  
  //Calculation process..   (we divide balance from number of values and also we get the remaining(because this is a integer division) and asign those values to variables that we previously declared.)
  numFiveThousend = balance/5000 ;
  remain = balance % 5000;
  
  numTwoThousend = remain/2000;
  remain = remain %2000;
  
  numThousend = remain / 1000;
  remain = remain % 1000;
  
  numFiveHundred = remain / 500;
  remain = remain % 500;
  
  numHundred = remain / 100;
  remain = remain % 100;
  
  numFifty = remain / 50;
  remain = remain% 50;
  
  numTwenty = remain / 20;
  remain = remain % 20;
  
  numTen = remain / 10;
  remain = remain % 10;
  
  numFive = remain / 5;
  remain = remain % 5;
  
  numTwo = remain /2;
  remain = remain % 2;
  
  numRupee = remain ;
  
  
  // Print Statements
    std::cout<<"\n\n";
    std::cout << "You need to give " <<numFiveThousend<<" five thousend rupee paper/s."<<std::endl;
    std::cout << "You need to give " <<numTwoThousend<<" two thousend rupee paper/s."<<std::endl;
    std::cout << "You need to give " <<numThousend<<" thousend rupee paper/s."<<std::endl;
    std::cout << "You need to give " <<numFiveHundred<<" five hundred rupee paper/s."<<std::endl;
    std::cout << "You need to give " <<numHundred<<" hundred rupee paper/s."<<std::endl;
    std::cout << "You need to give " <<numFifty<<" fifty rupee paper/s."<<std::endl;
    std::cout << "You need to give " <<numTwenty<<" twenty rupee paper/s."<<std::endl;
    std::cout << "You need to give " <<numTen<<" ten rupee paper/s."<<std::endl;
    std::cout << "You need to give " <<numFive<<" five ruppee coin/s"<<std::endl;
    std::cout << "You need to give " <<numTwo<<" two ruppee coin/s"<<std::endl;
    std::cout << "You need to give " <<numRupee<<" one ruppee coin/s"<<std::endl;
    
    
    
  return 0;
}
