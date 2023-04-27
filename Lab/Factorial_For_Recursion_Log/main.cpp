/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 25th,2023 10:40 AM
 * Purpose:  Factorial Investigation
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cmath>      //Math Library
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions const to follow

//Function Prototypes
unsigned int factFor(unsigned int);//Factorial with a Loop
unsigned int factRec(unsigned int);//Factorial using recursion
unsigned int factLog(unsigned int,float &);//Factorial using Logs


//Execution Starts Here
int main(int argc, char** argv){
    //Declare Variables - Known and Unknown, units, range, description
    unsigned int n;
    unsigned int ans1,ans2,pow10;
    float fixed;
    
    //Initialize Variables
    cout<<"This program calculates n!"<<endl;
    cout<<"Input n"<<endl;
    cin>>n;
    
    //Map inputs to outputs -> i.e. process the inputs
    ans1=factFor(n);
    ans2=factRec(n);
    pow10=factLog(n,fixed);
    
    //Display the outputs
    cout<<"For Loop  Implementation "<<n<<"!="<<ans1<<endl;
    cout<<"Recursion Implementation "<<n<<"!="<<ans2<<endl;
    cout<<"Log       Implementation "<<n<<"!="<<fixed<<"x10^"<<pow10<<endl;
    
    //Clean up - File closing, memory deallocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations
unsigned int factLog(unsigned int n,float &fixed10){
    float sumLogE=0;
    for(int i=1;i<=n;i++){
        sumLogE+=log(i);
    }
    float sumLg10=sumLogE/log(10);
    unsigned int pow10=sumLg10;
    fixed10=pow(10,sumLg10-pow10);
    return pow10;
}


unsigned int factRec(unsigned int n){
    //Base Case
    if(n<=1)return 1;
    //Recursion
    return factRec(n-1)*n;
}

unsigned int factFor(unsigned int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}