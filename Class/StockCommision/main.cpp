/* 
 * File:   main.cpp
 * Author: Sterling Winston
 *
 * Created on February 15, 2023, 11:11 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global COnstants - Math/Physics/Chemistry/Conversions Only
const unsigned char PERCENT = 'd'; // conversion to percent

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    int shrs; // number of shares purchased
    float   perCom, // Percent commission
            comAmt, // Amount of commission
            ppShr, // Price Per share
            stkPrc, // Stock Price  
            total; // Total amount
    
    //Initialize inputs
    ppShr = 35;
    perCom = 2;
    
    cout << "Enter the amount of shares: " << endl;
    cin >> shrs;
    
    //Map inputs to Outputs - Process
    perCom /= PERCENT;
    stkPrc = shrs*ppShr;
    comAmt = perCom*stkPrc;
    total = stkPrc + comAmt;
    
    //Display output
    cout << "The price of the stock before commission: " << stkPrc << endl;
    cout << "The amount of commission: " << comAmt << endl;
    cout << "The total amount for the stock after commission: " << total;
    
    //Exit stage right
    return 0;
}

