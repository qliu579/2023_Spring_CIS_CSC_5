/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on March 28th, 2023, 10:20 AM
 * Purpose:  Example Menu
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY!!!!

//Function Prototypes

//Execution Begins HERE!!!!
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare variables
    char choice;
    
    //Initialize Inputs
    cout<<"Which Problem would you like to run"<<endl;
    cout<<"1.  Problem 1"<<endl;
    cout<<"2.  Problem 2"<<endl;
    cout<<"3.  Problem 3"<<endl;
    cout<<"4.  Problem 4"<<endl;
    cin>>choice;
    
    //Map Inputs to Outputs - Process
    switch(choice){
        case '1':cout<<endl<<"You are in Problem 1"<<endl;break;
        case '2':cout<<endl<<"You are in Problem 2"<<endl;break;
        case '3':cout<<endl<<"You are in Problem 3"<<endl;break;
        case '4':cout<<endl<<"You are in Problem 4"<<endl;break;
        default: cout<<endl<<"Exiting Menu"<<endl;
    }
    
    //Display output
    cout<<endl<<"End of Menu"<<endl;

    //Exit stage right
    return 0;
}

