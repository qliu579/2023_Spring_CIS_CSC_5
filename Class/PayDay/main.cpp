/* 
 * File:   main.cpp
 * Author: Your Name
 * Created on March 2nd, 2023, 10:45 AM
 * Purpose:  PayDay
 */

//System Libraries
#include <iostream>  //Input output stream 
#include <cstdlib>   //Random function
#include <ctime>     //Time Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY!!!!

//Function Prototypes

//Execution Begins HERE!!!!
int main(int argc, char** argv) {
    //Set random number seed
    //srand(static_cast<unsigned int>(time(0)));
    unsigned int usiNow=time(0);
    srand(usiNow);
    
    //Declare variables
    float payDay1,//Pay in $'s at the end of the day
          payDay2,//Pay in $'s at the end of the day
          payRate,//Pay rate in $'s hour
           ovrTim,//Over time starts when? hours
          hrsWrkd;//Hours worked in hour
    
    //Initialize Inputs
    hrsWrkd=rand()%17;//[0,16] Hours Worked
    payRate=1.5e1f;//$15/hr
    ovrTim=8;//Overtime starts when hrsWrkd > 8
    
    //Map Inputs to Outputs - Process
    payDay1 = hrsWrkd<=ovrTim?  //Boolean Expression
              payRate*hrsWrkd:  //If Boolean expression is true execute this
              payRate*ovrTim + 1.5*payRate*(hrsWrkd-ovrTim);//If false then this
    
    payDay2 = payRate*hrsWrkd;//Straight time pay
    payDay2+= hrsWrkd>=ovrTim?
              0.5*payRate*(hrsWrkd-ovrTim):0;
    
    //Display output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"For "<<hrsWrkd<<" hours worked our Payday = $"<<payDay1<<endl;
    cout<<"For "<<hrsWrkd<<" hours worked our Payday = $"<<payDay2<<endl;

    //Exit stage right
    return 0;
}