/* 
 * File:   main.cpp
 * Author: Your Name
 * Created on February 28, 2023, 11:47 AM
 * Purpose:  Gaddis Error Monthly Payment
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY!!!!
const unsigned char PERCENT=100;//Conversion to Percent

//Function Prototypes

//Execution Begins HERE!!!!
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare variables
    float loan,//Loan Amount in $'s
       intRate,//Interest Rate Percent
       mnPymt, //Monthly Payment in $'s
      amtPaid, //Amount paid back $'s
      intPaid; //Interest paid in $'s
    unsigned char numPmts;//Number of monthly payments
    
    //Initialize Inputs
    loan=1e4f;//$10,000
    intRate=1.0f/PERCENT;//1 percent in decimal conversion
    numPmts=36;//Number of monthly payments
    
    //Map Inputs to Outputs - Process
    float utility=pow(1+intRate,numPmts);
    mnPymt=intRate*utility*loan/(utility-1);
    amtPaid=mnPymt*numPmts;
    intPaid=amtPaid-loan;
    
    //Display output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan Amount:               $"<<setw(9)<<loan<<endl;
    cout<<"Monthly Interest Rate:      "<<setw(9)<<intRate*PERCENT<<"%"<<endl;
    cout<<"Number of Payments:         "<<setw(9)<<static_cast<int>(numPmts)<<endl;
    cout<<"Monthly Payment:            $"<<setw(9)<<mnPymt<<endl;
    cout<<"Amount Paid Back:           $"<<setw(9)<<amtPaid<<endl;
    cout<<"Interest Paid:              $"<<setw(9)<<intPaid<<endl;

    //Exit stage right
    return 0;
}

