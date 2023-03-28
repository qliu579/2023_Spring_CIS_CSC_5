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
    grade = score>=90?'A':
            score>=80?'B':
            score>=70?'C':
            score>=60?'D':'F';
    
    psFail = score>=70?'P':'F';
    
    //Display output
    cout<<"With a score of "<<static_cast<int>(score)
        <<" gives a grade of "<<grade
        <<" which means you "
        <<((psFail=='P')?"Pass":"Fail")<<endl;

    //Exit stage right
    return 0;
}

