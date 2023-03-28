/* 
 * File:   main.cpp
 * Author: Your Name
 * Created on March 14, 2023, 11:27 AM
 * Purpose:  Grade with Ternary Operator
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time Functions
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY!!!!

//Function Prototypes

//Execution Begins HERE!!!!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    unsigned char score,grade,psFail;
    
    //Initialize Inputs
    score=rand()%51+50;//[50,100]
    
    //Map Inputs to Outputs - Process
    if(score>=90)     grade='A';
    else if(score>=80)grade='B';
    else if(score>=70)grade='C';
    else if(score>=60)grade='D';
    else              grade='F';
    
    if(score>=70)psFail='P';
    else         psFail='F';
    
    //Display output
    cout<<"With a score of "<<static_cast<int>(score)
        <<" gives a grade of "<<grade
        <<" which means you ";
    if(psFail=='P')cout<<"Pass"<<endl;
    else           cout<<"Fail"<<endl;

    //Exit stage right
    return 0;
}

