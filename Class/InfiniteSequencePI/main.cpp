/* 
 * File:   main.cpp
 * Author: Your Name
 * Created on April 4th, 2023, 11:47 AM
 * Purpose:  Infinite Sequence for PI
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math library with e^x = 1+x+x^2/2!+x^3/3!
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY!!!!
const float PI=4*atan(1);

//Function Prototypes

//Execution Begins HERE!!!!
int main(int argc, char** argv) {
    //Declare variables
    float aprxPI,tol,sign;
    
    //Initialize Inputs
    aprxPI=1;
    sign=1;
    tol=1e-6f;
    
    //Map Inputs to Outputs - Process
    for(int i=3;1.0f/i>tol;i+=2){
        sign*=-1;
        aprxPI+=sign/i;
        //cout<<"Count = "<<i/2.0f<<endl;
    }
    aprxPI*=4;
    
    
    //Display output
    cout<<"The approx value of PI = "<<aprxPI<<endl;
    cout<<"The exact value of PI  = "<<PI<<endl;

    //Exit stage right
    return 0;
}

