/* 
 * File:   main.cpp
 * Author: Your Name
 * Created on April 4th, 2023, 11:47 AM
 * Purpose:  Infinite Sequence for PI
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math library with e^x = 1+x+x^2/2!+x^3/3!
#include <cstdlib>   //Random function
#include <ctime>     //Set the random number seed
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY!!!!
const float PI=4*atan(1);
const unsigned int MAXRND=(1<<31)-1;//pow(2,31)-1;//(1<<31)-1;

//Function Prototypes

//Execution Begins HERE!!!!
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int totDart,inCircle;
    
    //Initialize Inputs
    totDart=100000;
    inCircle;
    
    //Map Inputs to Outputs - Process
    for(int dart=1;dart<=totDart;dart++){
        float x=1.0f*rand()/MAXRND;//X coordinate of the dart
        float y=1.0f*rand()/MAXRND;//y coordinate of the dart
        if(x*x+y*y<=1)inCircle++;  //Unit Circle hyp
    }
   
    //Display output
    cout<<"This is how a dart game can approximate PI"<<endl;
    cout<<"Darts in the Circle    = "<<inCircle<<endl;
    cout<<"Total number of Darts  = "<<totDart<<endl;
    cout<<"The approx value of PI = "<<4.0f*inCircle/totDart<<endl;
    cout<<"The exact value of PI  = "<<PI<<endl;

    //Exit stage right
    return 0;
}

