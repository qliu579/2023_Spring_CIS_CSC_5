/* 
 * File:   main.cpp
 * Author: Your Name
 * Created on Mar 9th, 2023, 10:02 AM
 * Purpose:  Sum Positive/Negative
 */

//System Libraries
#include <iostream>  //Library I/O
#include <cstdlib>   //Random Functions
#include <ctime>     //Set the random number seed
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY!!!!

//Function Prototypes

//Execution Begins HERE!!!!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<int>(time(0)));
    
    //Declare variables
    short inVar, sumPos, sumNeg;
    
    //Initialize Inputs
    sumPos=sumNeg=0;
    
    //Map Inputs to Outputs - Process
    //Normally cin>>inVar
    inVar=rand()%19-9;//[-9,9]
    cout<<"Input Variable = "<<inVar<<endl;
        inVar>0?        //Boolean Expression
        sumPos+=inVar:  //When True
        sumNeg+=inVar;  //When False
       
    //Map Inputs to Outputs - Process
    //Normally cin>>inVar
    inVar=rand()%19-9;//[-9,9]
    cout<<"Input Variable = "<<inVar<<endl;
        inVar>0?        //Boolean Expression
        sumPos+=inVar:  //When True
        sumNeg+=inVar;  //When False
        
        //Map Inputs to Outputs - Process
    //Normally cin>>inVar
    inVar=rand()%19-9;//[-9,9]
    cout<<"Input Variable = "<<inVar<<endl;
        inVar>0?        //Boolean Expression
        sumPos+=inVar:  //When True
        sumNeg+=inVar;  //When False
       
    //Map Inputs to Outputs - Process
    //Normally cin>>inVar
    inVar=rand()%19-9;//[-9,9]
    cout<<"Input Variable = "<<inVar<<endl;
        inVar>0?        //Boolean Expression
        sumPos+=inVar:  //When True
        sumNeg+=inVar;  //When False
        
        //Map Inputs to Outputs - Process
    //Normally cin>>inVar
    inVar=rand()%19-9;//[-9,9]
    cout<<"Input Variable = "<<inVar<<endl;
        inVar>0?        //Boolean Expression
        sumPos+=inVar:  //When True
        sumNeg+=inVar;  //When False
       
    //Map Inputs to Outputs - Process
    //Normally cin>>inVar
    inVar=rand()%19-9;//[-9,9]
    cout<<"Input Variable = "<<inVar<<endl;
        inVar>0?        //Boolean Expression
        sumPos+=inVar:  //When True
        sumNeg+=inVar;  //When False
        
    //Map Inputs to Outputs - Process
    //Normally cin>>inVar
    inVar=rand()%19-9;//[-9,9]
    cout<<"Input Variable = "<<inVar<<endl;
        inVar>0?        //Boolean Expression
        sumPos+=inVar:  //When True
        sumNeg+=inVar;  //When False
       
    //Map Inputs to Outputs - Process
    //Normally cin>>inVar
    inVar=rand()%19-9;//[-9,9]
    cout<<"Input Variable = "<<inVar<<endl;
        inVar>0?        //Boolean Expression
        sumPos+=inVar:  //When True
        sumNeg+=inVar;  //When False
       
    //Map Inputs to Outputs - Process
    //Normally cin>>inVar
    inVar=rand()%19-9;//[-9,9]
    cout<<"Input Variable = "<<inVar<<endl;
        inVar>0?        //Boolean Expression
        sumPos+=inVar:  //When True
        sumNeg+=inVar;  //When False
       
    //Map Inputs to Outputs - Process
    //Normally cin>>inVar
    inVar=rand()%19-9;//[-9,9]
    cout<<"Input Variable = "<<inVar<<endl;
        inVar>0?        //Boolean Expression
        sumPos+=inVar:  //When True
        sumNeg+=inVar;  //When False
    
    //Display output
    cout<<"Sum of the Positive Values = "<<sumPos<<endl;
    cout<<"Sum of the Negative Values = "<<sumNeg<<endl;
    cout<<"Sum of the All the  Values = "<<sumPos+sumNeg<<endl;
        
    //Exit stage right
    return 0;
}

