/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 25th, 2023 12:30 AM
 * Purpose:  C++ Template
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cmath>      //Math Library
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions const to follow

//Function Prototypes
bool notPrm(unsigned int);
bool  isPrm(unsigned int);

//Execution Starts Here
int main(int argc, char** argv){
    //Declare Variables - Known and Unknown, units, range, description
     unsigned int n;
     
    //Initialize Variables
    cout<<"This program determines if a integer is prime or composite"<<endl;
    cout<<"Input an integer"<<endl;
    cin>>n;
    
    //Map inputs to outputs -> i.e. process the inputs
    
    //Display the outputs
    cout<<"Test the not Prime Function"<<endl;
    for(int i=2;i<=n;i++){
        if(notPrm(i))cout<<i<<" is a composite"<<endl;
        else cout<<i<<" is a prime number"<<endl;
    }
    
    //Display the outputs
    cout<<endl<<"Test the is Prime Function"<<endl;
    for(int i=2;i<=n;i++){
        if(isPrm(i))cout<<i<<" is a prime number"<<endl;
        else cout<<i<<" is a composite"<<endl;
    }
    
    //Clean up - File closing, memory deallocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations
bool  isPrm(unsigned int n){
    return !notPrm(n);
}

bool notPrm(unsigned int n){
    if(n<=1)return true;
    float sqrtn=sqrt(n);
    for(int i=2;i<=sqrtn;i++){
        if(n%i==0)return true;
    }
    return false;
}