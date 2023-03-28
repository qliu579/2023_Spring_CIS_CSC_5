/* 
 * File:   main.cpp
 * Author: Your Name
 * Created on February 21, 2023, 11:43 AM
 * Purpose:  Calculate Pocket Change
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random functions
#include <ctime>     //Time to set the random seed
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY!!!!
const unsigned char PENNY=1;//Pennies = 1 cent
const unsigned char NICKLE=5;//Nickle = 5 cents
const unsigned char DIME=10;//Dime = 10 cents
const unsigned char QRTR=25;//Quarter = 25 cents
const float DOLLARS=100.0f;//Conversion to DOLLARS

//Function Prototypes

//Execution Begins HERE!!!!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    unsigned char nPnys, //Number of Pennies
                  nNkls, //Number of Nickles
                  nDimes,//Number of Dimes
                  nQrtrs;//Number of Quarters
    unsigned short pcktCng;//Pocket change in Pennies
    float dollars;//Change in Dollars $
    
    //Initialize Inputs
    nPnys=rand()%11;//[0,10]
    nNkls=rand()%11;//[0,10]
    nDimes=rand()%11;//[0,10]
    nQrtrs=rand()%11;//[0,10]
    
    //Map Inputs to Outputs - Process
    pcktCng = nPnys*PENNY + nNkls*NICKLE 
                   + nDimes*DIME + nQrtrs*QRTR;
    dollars=pcktCng/DOLLARS;
    
    //Display output
    cout<<"Number of Pennies  = "<<static_cast<int>(nPnys)<<endl;
    cout<<"Number of Nickles  = "<<static_cast<int>(nNkls)<<endl;
    cout<<"Number of Dimes    = "<<static_cast<int>(nDimes)<<endl;
    cout<<"Number of Quarters = "<<static_cast<int>(nQrtrs)<<endl;
    cout<<"Total number of cents = "<<pcktCng<<endl;
    //cout<<"Total number of dollars = $"<<dollars<<endl;
    //cout<<"Total number of dollars = $"<<pcktCng/100<<
    //        "."<<pcktCng%100<<endl;
    cout<<"Total number of dollars = $"<<pcktCng/100<<".";
    cout<<((pcktCng%100<10)?'0':'\0')<<pcktCng%100<<endl;

    //Exit stage right
    return 0;
}

