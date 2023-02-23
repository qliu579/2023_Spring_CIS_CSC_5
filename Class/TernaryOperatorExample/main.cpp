/* 
 * File:   main.cpp
 * Author: Your Name
 * Created on February 23, 2023, 10:15 AM
 * Purpose:  To be used to start each project in CIS/CSC 5
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Library
#include <ctime>     //Setting the seed with time
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY!!!!

//Function Prototypes

//Execution Begins HERE!!!!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<int>(time(0)));
    
    //Declare variables
    short sumNeg,sumPos,sumTot,vriabl;
    
    //Initialize Inputs
    sumNeg=sumPos=sumTot=0;
    
    //Map Inputs to Outputs - Process
    vriabl=rand()%11-5;//[-5,5]
    cout<<"The value to sum "<<vriabl<<endl;
    //sumNeg+=(vriabl<0)?vriabl:0;
    //sumPos+=(vriabl>0)?vriabl:0;
    //Boolean    if true do this         if false do this
    (vriabl<0) ? sumNeg=sumNeg+vriabl : sumPos=sumPos+vriabl;
    
    //Map Inputs to Outputs - Process
    vriabl=rand()%11-5;//[-5,5]
    cout<<"The value to sum "<<vriabl<<endl;
    sumNeg=sumNeg+((vriabl<0)?vriabl:0);
    sumPos=sumPos+((vriabl>0)?vriabl:0);
    
    //Map Inputs to Outputs - Process
    vriabl=rand()%11-5;//[-5,5]
    cout<<"The value to sum "<<vriabl<<endl;
    sumNeg+=(vriabl<0)?vriabl:0;
    sumPos+=(vriabl>0)?vriabl:0;
    
    //Map Inputs to Outputs - Process
    vriabl=rand()%11-5;//[-5,5]
    cout<<"The value to sum "<<vriabl<<endl;
    sumNeg+=(vriabl<0)?vriabl:0;
    sumPos+=(vriabl>0)?vriabl:0;
    
    //Map Inputs to Outputs - Process
    vriabl=rand()%11-5;//[-5,5]
    cout<<"The value to sum "<<vriabl<<endl;
    sumNeg+=(vriabl<0)?vriabl:0;
    sumPos+=(vriabl>0)?vriabl:0;
    
    //Map Inputs to Outputs - Process
    vriabl=rand()%11-5;//[-5,5]
    cout<<"The value to sum "<<vriabl<<endl;
    sumNeg+=(vriabl<0)?vriabl:0;
    sumPos+=(vriabl>0)?vriabl:0;
    
    //Map Inputs to Outputs - Process
    vriabl=rand()%11-5;//[-5,5]
    cout<<"The value to sum "<<vriabl<<endl;
    sumNeg+=(vriabl<0)?vriabl:0;
    sumPos+=(vriabl>0)?vriabl:0;
    
    //Map Inputs to Outputs - Process
    vriabl=rand()%11-5;//[-5,5]
    cout<<"The value to sum "<<vriabl<<endl<<endl;
    sumNeg+=(vriabl<0)?vriabl:0;
    sumPos+=(vriabl>0)?vriabl:0;
    
    //Display output
    sumTot=sumNeg+sumPos;
    cout<<"The Negative sum = "<<sumNeg<<endl;
    cout<<"The Positive sum = "<<sumPos<<endl;
    cout<<"The Total sum = "<<sumTot<<endl;
    
    //Exit stage right
    return 0;
}