/* 
 * File:   main.cpp
 * 
 * Author: Isaac Alvarez
 *
 * Created on February 14, 2023, 6:39 PM
 * 
 * Purpose: To calculate and display meal cost, tax amount,tip amount, and total bill 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Library

//Global Constants Math/Physics/Chemistry/Conversions ONLY!!!
const float HLFPNY = 0.005f; // conversion for tax and tip
const float CNVPNY = 100.0f; //conversion to pennies
//Function Prototypes 

//Execution Begins Here
int main(int argc, char** argv) {
    //Setting Random Number Seed
    
    
    //Declare all variables here 
    float mcost,//meal cost
          tcost,//total cost (meal with tax)
          tax,//tax of meal 6.75%
       taxAmt,//Tax in $'s
          tip,//tip 20%
       tipAmt,//Tip in $'s
          tbill;//total cost of bill
    
    
    //Initialize input values
    mcost = 88.67; 
    tax = 0.0675;
    tip=0.2;
    
    //Map input to Output/Process
    taxAmt = mcost*tax; //calculates tax
    int rddtax =(taxAmt+HLFPNY)*100;//Convert to Pennies
    taxAmt = rddtax/CNVPNY;
    tcost = mcost+taxAmt;
    tipAmt = tcost*tip;
    int rddtip =(tipAmt+HLFPNY)*100;
    tipAmt = rddtip/CNVPNY;
    tbill = tcost + tipAmt;
    
    //Display Output
    cout<<"The cost of the meal is $"<<mcost<<endl;
    cout<<"The tax amount is $"<<taxAmt<<endl;
    cout<<"The tip amount is $"<<tipAmt<<endl;
    cout<<"The total amount of the bill is $"<<tbill<<endl;
    
    //Exit Program
    return 0;
}

