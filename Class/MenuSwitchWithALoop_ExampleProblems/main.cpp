/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on March 28th, 2023, 10:20 AM
 * Purpose:  Example Menu
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
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
    
    //Declare variables
    char choice;
    
    //Initialize Inputs
    do{
        cout<<"Which Problem would you like to run"<<endl;
        cout<<"1.  Problem Savitch 9thEd Chap2 Prob9 Sums"<<endl;
        cout<<"2.  Problem Savitch 10thEd Chap1 Prob3 PocketChange"<<endl;
        cout<<"3.  Problem 3"<<endl;
        cout<<"4.  Problem 4"<<endl;
        cin>>choice;

        //Map Inputs to Outputs - Process
        switch(choice){
            case '1':{
                cout<<endl<<"You are in Savitch 9thEd Chap2 Prob9 Sums"<<endl;
                    //Declare Variables
                int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,posSum,
                    negSum,totSum;

                //Initialize or input i.e. set variable values
                negSum = posSum = totSum = 0;

                cout << "Input 10 numbers, any order, positive or negative" << endl;
                cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10;

                //Map inputs -> outputs
               (num1 <= 0) ? negSum += num1 : posSum += num1;
               (num2 <= 0) ? negSum += num2 : posSum += num2;
               (num3 <= 0) ? negSum += num3 : posSum += num3;
               (num4 <= 0) ? negSum += num4 : posSum += num4;
               (num5 <= 0) ? negSum += num5 : posSum += num5;
               (num6 <= 0) ? negSum += num6 : posSum += num6;
               (num7 <= 0) ? negSum += num7 : posSum += num7;
               (num8 <= 0) ? negSum += num8 : posSum += num8;
               (num9 <= 0) ? negSum += num9 : posSum += num9;
               (num10 <= 0) ? negSum += num10 : posSum += num10;

               totSum = negSum + posSum;

                //Display the outputs
                cout << "Negative sum =" << setw(4) << negSum << endl;
                cout << "Positive sum =" << setw(4) << posSum << endl;
                cout << "Total sum    =" << setw(4) << totSum<<endl<<endl;
                break;
            }
            case '2':{
                cout<<endl<<"You are in Savitch 10thEd Chap1 Prob3 PocketChange"<<endl;
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
                cout<<((pcktCng%100<10)?'0':'\0')<<pcktCng%100<<endl<<endl;
                break;
            }
            case '3':cout<<endl<<"You are in Problem 3"<<endl;break;
            case '4':cout<<endl<<"You are in Problem 4"<<endl;break;
            default: cout<<endl<<"Exiting Menu"<<endl;
        }
    }while(choice>='1'&&choice<='4');
    
    //Display output
    cout<<endl<<"End of Menu"<<endl;

    //Exit stage right
    return 0;
}

