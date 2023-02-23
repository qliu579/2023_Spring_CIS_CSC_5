/* 
 * File:   main.cpp
 * Author: Your Name
 * Created on February 16, 2023, 11:35 AM
 * Purpose:  Paint Can Calculator
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY!!!!

//Function Prototypes

//Execution Begins HERE!!!!
int main(int argc, char** argv) {
    //Declare variables
    float pntCov,//Gallon of Paint Surface Coverage ft^2
          hght,  //Height of fence in ft
         lngth,  //Length of fence in ft
        totCov;  //Surface area in ft^2 required to paint
    unsigned char nCans;  //Number of paint cans needed for the job [0,255]
    
    //Initialize Inputs
    pntCov=3.4e2f;//340 square feet
    hght=6;//6 feet
    lngth=1e2f;//100 feet
    
    //Map Inputs to Outputs - Process
    totCov=2*2*hght*lngth;//Area 1 side of fence x2 both sides x2 paint twice
    nCans=totCov/pntCov+1;//Number of cans needed for the job
    
    //Display output
    cout<<"Paint Job"<<endl;
    cout<<"Fence dimensions = "<<lngth<<"' x "<<hght<<"'"<<endl;
    cout<<"Requirements = both sides, 2 coats"<<endl;
    cout<<"Surface to cover = "<<totCov<<" ft^2"<<endl;
    cout<<"Number of Paint Cans needed = "<<static_cast<int>(nCans)<<endl;
 
    //Exit stage right
    return 0;
}

