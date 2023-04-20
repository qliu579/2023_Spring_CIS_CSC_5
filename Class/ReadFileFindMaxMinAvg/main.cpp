/* 
 * File:   main.cpp
 * Author: Your Name
 * Created on April 4th, 2023, 9:43 AM
 * Purpose:  Read from file and find max and min
 */

//System Libraries
#include <iostream>  //I/O Library
#include <fstream>   //File Stream Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Set the random number seed
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY!!!!

//Function Prototypes

//Execution Begins HERE!!!!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    fstream in;
    int num,max,min,cnt;
    float avg;
    
    //Initialize Inputs
    in.open("out.dat",ios::in);
    
    //Map Inputs to Outputs - Process
    in>>max;
    avg=min=max;
    cnt=1;
    cout<<"Max,Min at this point = "<<max<<endl;
    while(in>>num){
        avg+=num;
        max=num>max?num:max;
        min=num<min?num:min;
        cnt++;
        cout<<"Max,Min at this point = ["<<max<<","<<min<<"]"<<endl;
    }
    
    //What is the max number in the file
    cout<<"This program finds the max integer in a file"<<endl;
    cout<<"The max       = "<<max<<endl;
    cout<<"The min       = "<<min<<endl;
    cout<<"The sum       = "<<avg<<endl;
    cout<<"Size of file  = "<<cnt<<endl;
    cout<<"The average   = "<<avg/cnt<<endl;

    

    //Clean up files
    in.close();

    //Exit stage right
    return 0;
}

