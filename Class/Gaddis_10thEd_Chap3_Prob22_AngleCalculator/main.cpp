/* 
 * File:   main.cpp
 * Author: Your Name
 * Created on February 28, 2023, 12:20 PM
 * Purpose:  Trig Calculations
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Trig Functions
#include <cstdlib>   //Random number library
#include <ctime>     //Time library to set seed
#include <iomanip>   //Format library
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY!!!!
const float PI=4*atan(1);//Constant 3.1415.....

//Function Prototypes

//Execution Begins HERE!!!!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    float degrees,//Angle in degrees
          radians;//Angle in radians
    
    //Initialize Inputs
    degrees=rand()%181;//[0,180]
    
    //Map Inputs to Outputs - Process
    radians=degrees*PI/180;//Convert to radians
    
    //Display output
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"tan("<<degrees<<" degrees) = "<<tan(radians)<<" radians"<<endl;
    cout<<"sin("<<degrees<<" degrees) = "<<sin(radians)<<" radians"<<endl;
    cout<<"cos("<<degrees<<" degrees) = "<<cos(radians)<<" radians"<<endl;
    cout<<"tan("<<degrees<<" degrees) = "<<sin(radians)/cos(radians)<<" radians"<<endl;

    //Exit stage right
    return 0;
}

