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
    float x,//x in e^x
       etox,//approximation to e^x
    valTerm,//each value of the term x^i/i!
        tol;//Accuracy desired;
    
    //Outer Loop
    x=3.0;
    etox=1;
    valTerm=1;
    tol=1e-5f;
    
    //Loop to find etox
    for(int nfact=1;abs(valTerm)>tol;nfact++){
        //Initialize Inputs
        valTerm*=x/nfact;
        etox+=valTerm;
        cout<<nfact+1<<" terms = e^"<<x<<" = "<<etox<<endl;
    }
    
    //Display output
    cout<<"Approximation of e("<<x<<")="<<etox<<endl;
    cout<<"Exact            e("<<x<<")="<<exp(x)<<endl;

    //Exit stage right
    return 0;
}

