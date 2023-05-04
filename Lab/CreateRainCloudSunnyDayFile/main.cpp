/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 4th, 11:30 AM
 * Purpose:  Create a Data File
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <fstream>    //File I/O Library
#include <cmath>      //Math Library
#include <cstdlib>    //Random Function
#include <ctime>      //See the Random function
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions const to follow

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv){
    //Set Random Number Seed Here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables - Known and Unknown, units, range, description
    char weather[]={'R','C','S'};
    fstream out;
    int nMonths,nDays;
    
    //Initialize Variables
    out.open("weather.dat",ios::out);
    nMonths=3;
    nDays=30;
    
    //Map inputs to outputs -> i.e. process the inputs
    out<<nMonths<<" "<<nDays<<endl;
    for(int month=1;month<=nMonths;month++){
        for(int day=1;day<=nDays;day++){
            out<<weather[rand()%3]<<" ";
        }
        out<<endl;
    }
    
    //Display the outputs
    
    //Clean up - File closing, memory deallocation, etc....
    out.close();

    //Exit Stage Right!
    return 0;
}

//Function Implementations