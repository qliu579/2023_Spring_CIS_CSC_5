/* 
 * File:   main.cpp
 * Author: Malachi Ferrett
 * Created on February 22, 2023, 2:19 PM
 * Purpose:  This program calculates the approximate number of customers
 * in the survey who purchase one or more energy drinks per week and the
 * approximate number of customers in the survey who prefer citrus-flavored
 * energy drinks.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants:  Math/Physics/Chemistry/Conversions ONLY!!!!

//Function Prototypes

//Execution Begins HERE!!!!
int main(int argc, char** argv) {
    //Declare all variables here
    float pprched,//Percent who purchased an energy drink
          pcitrus; //Percent of those who purchased who prefer citrus flavor
    unsigned short nsurvey, //Number surveyed
                  nprched,//Percent who purchased an energy drink
                  ncitrus;//Number who prefer citrus flavor
    
    //Initialize Inputs:
    nsurvey=16500;//16500
    pprched=1.5e-1f;//0.15 percent
    pcitrus=5.8e-1f;//0.58 percent
    
    //Map Input to Output/Process
    nprched=pprched * nsurvey;//Number who purchased an energy drink
    ncitrus=nprched * pcitrus;//Number who prefer citrus flavored drink
    
    //Display Output
    cout<<nprched <<" customers purchased"
            <<" one or more energy drinks per week.\n"
            <<ncitrus<<" of those  customers  "
            <<"preferred citrus flavored energy drink.\n";
  
    
    //Exit Stage Right
    return 0;
}