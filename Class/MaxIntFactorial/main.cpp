/* 
 * File:   main.cpp
 * Author: Your Name
 * Created on April 4th, 10:32 AM
 * Purpose:  To be used to start each project in CIS/CSC 5
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY!!!!

//Function Prototypes

//Execution Begins HERE!!!!
int main(int argc, char** argv) {
    //Declare variables
    int fctril,nloop;
    
    //Initialize Inputs
    fctril=1;
    nloop=20;
    
    //Map Inputs to Outputs - Process
    for(int i=1;i<=nloop;i++){
        fctril*=i;
        cout<<i<<"!="<<fctril<<endl;
    }
    
    //Display output

    //Exit stage right
    return 0;
}

