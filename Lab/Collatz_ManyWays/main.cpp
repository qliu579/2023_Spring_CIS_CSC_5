/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 25th, 11:50 AM
 * Purpose:  Collatz Sequence
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cmath>      //Math Library
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions const to follow

//Function Prototypes
void prColtz(unsigned int);
int  clcCltz(unsigned int);
int  collatz(unsigned int);

//Execution Starts Here
int main(int argc, char** argv){
    //Declare Variables - Known and Unknown, units, range, description
    unsigned int n;
    
    //Initialize Variables
    cout<<"Display the Collatz Sequence"<<endl;
    cout<<"Input a positive integer"<<endl;
    cin>>n;
    
    //Map inputs to outputs -> i.e. process the inputs
    
    //Display the outputs
    prColtz(n);
    cout<<"The sequence Length = "<<clcCltz(n)<<endl;
    cout<<"The sequence Length = "<<collatz(n)<<endl;
    
    //Clean up - File closing, memory deallocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations
int  collatz(unsigned int n){
    int seqLen=1;
    while(n>1){
        if(n%2==0){
            n>>=1;
        }else{
            n=n+(n<<1)+1;
        }
        seqLen++;
    }
    return seqLen;
}

int  clcCltz(unsigned int n){
    int seqLen=1;
    while(n>1){
        if(n%2==0){
            n/=2;
        }else{
            n=3*n+1;
        }
        seqLen++;
    }
    return seqLen;
}


void prColtz(unsigned int n){
    cout<<n<<", ";
    while(n>1){
        n=n%2?3*n+1:n/2;
        cout<<n<<", ";
    }
    cout<<endl;
}