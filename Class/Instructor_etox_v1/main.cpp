/* 
 * File:   main.cpp
 * Author: Your Name
 * Created on April 4th, 10:32 AM
 * Purpose:  Calculate e^x using the infinite sum series
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math library with e^x = 1+x+x^2/2!+x^3/3!
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY!!!!

//Function Prototypes

//Execution Begins HERE!!!!
int main(int argc, char** argv) {
    //Declare variables
    int fctril,nfact,nterms;
    float x,etox,valTerm;
    
    //Outer Loop
    x=1.0;
    etox=1;
    nterms=13;
    valTerm=1;
    
    //Loop to find etox
    for(int nfact=1,term=2;term<=nterms;nfact++,term++){
        //Initialize Inputs
        valTerm*=x/nfact;
        etox+=valTerm;
    }
    
    //Display output
    cout<<"Approximation of e("<<x<<")="<<etox<<endl;
    cout<<"Exact            e("<<x<<")="<<exp(x)<<endl;

    //Exit stage right
    return 0;
}

