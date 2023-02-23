/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 15, 2023, 8:07 PM
 * Purpose:  All CSC 7 projects should be copied from this template
 */

//System Libraries 
#include <iostream>  //I/O Library command line
#include <cstdlib>   //Library for random function
#include <ctime>     //Set random number seed
#include <cmath>     //Absolute Value Function
using namespace std;

//User Libraries

//Global Constants - Math/Physics/Chemistry/Conversions/Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Setting the Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    float tol,example,compare;
    
    //Initialize Variables
    tol=1e-1f;
    example=24.7;
    compare=24+5.0/8.0;
    
    //Map Inputs to the Outputs - Process
    bool same1=abs(example-compare)<tol;
    bool same2=-tol<example-compare && example-compare<tol;
    
    //Display the output
    if(same1)cout<<example<<" = "<<compare<<endl;
    else cout<<example<<" != "<<compare<<endl;
    
    if(same2)cout<<example<<" = "<<compare<<endl;
    else cout<<example<<" != "<<compare<<endl;

    //Exit stage right
    return 0;
}

