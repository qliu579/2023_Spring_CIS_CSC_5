/* 
 * File:   main.cpp
 * Author: Your Name
 * Created on February 16, 2023, 12:15 PM
 * Purpose:  Save the Environment and World
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY!!!!
//const unsigned char PERCENT=100;//Conversion to Percent
const unsigned char PERCENT='d';//Conversion to Percent

//Function Prototypes

//Execution Begins HERE!!!!
int main(int argc, char** argv) {
    //Declare variables
    float tank,//Truck Gas Capacity Gallons
       gasGage,//Gas Gage % Full
        nGals,//Number of Gallons needed to fill    
         mpg, //Miles per gallon
        dist, //Distance in miles  - dist
      galDrv,//Gas need to get there in Gallons
      totGal,//Total Gallons needed
         ppg,//Price per gallon
        cost;//Cost to fill $'s 
            
    //Initialize Inputs
    tank=2.2e1f;//22 gallons
    mpg=1.6e1f;//16 miles to the gallon
    
    cout<<"This program calculates total cost to fill a Vehicle"<<endl;
    cout<<"Input Gas Gage reading in percentage filled "<<endl;
    cin>>gasGage;
    cout<<"Input Distance in miles to the Gas Station"<<endl;
    cin>>dist;
    cout<<"Input price per gallon of this Gas Station $'s"<<endl;
    cin>>ppg;
    
    //Map Inputs to Outputs - Process
    //gasGage/=PERCENT;
    gasGage=gasGage/PERCENT;
    nGals=tank*(1-gasGage);
    galDrv=2*dist/mpg;
    totGal=nGals+galDrv;
    cost=totGal*ppg;
   
    //Display output
    cout<<"The cost to fill $"<<cost<<endl;

    //Exit stage right
    return 0;
}

