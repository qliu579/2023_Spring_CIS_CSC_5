/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on Feb 1st, 2023, 10:10 AM
 * Purpose:  Custom Sort
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Random Function
#include <ctime>     //Seed the Random number function
using namespace std;

//User Libraries
#include "Array.h"

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
Array *filAray(int);  //Fill an array with 2digit numbers
void prntAry(Array *,int);//Print an array with #cols
void mrkSrt1(Array *);
Array *cpyAry(Array *);
void swap1(int &,int &);//Added Memory Swap
void smlPos(Array *,int);//Find smallest and swap with position
void mrkSrt3(Array *);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int size=80000;
    Array *array,*brray;
    
    //Initialize Variables
    array=filAray(size);
    brray=cpyAry(array);
    
    //Display Inputs/Outputs
    //cout<<"The original unsorted array"<<endl;
    //prntAry(array,10);
    //cout<<endl;
    //prntAry(brray,10);
    
    //Map/Process the Inputs -> Outputs
    int beg=time(0);
    mrkSrt1(array);
    int end=time(0);
    cout<<endl<<"Time for Mark Sort 1 Function with size = "<<
            size<<" runs in "<<end-beg<<" seconds"<<endl;
    
    beg=time(0);
    mrkSrt3(brray);
    end=time(0);
    cout<<endl<<"Time for Mark Sort 3 Function with size = "<<
            size<<" runs in "<<end-beg<<" seconds"<<endl;
    
    //Display Inputs/Outputs
    //cout<<endl<<endl<<"The sorted array"<<endl;
    //prntAry(array,10);
    //cout<<endl;
    //prntAry(brray,10);
    
    //Clean up memory and files
    delete []array->data;
    delete array;
    delete []brray->data;
    delete brray;
    
    //Exit the Program 
    return 0;
}

Array *cpyAry(Array *a){
    Array *b=new Array;
    b->data=new int[a->size];
    b->size=a->size;
    for(int i=0;i<b->size;i++){
        b->data[i]=a->data[i];
    }
    return b;
}

void mrkSrt1(Array *a){
    for(int j=0;j<a->size-1;j++){
        for(int i=j+1;i<a->size;i++){
            if(a->data[j]>a->data[i]){
                int temp=a->data[j];
                a->data[j]=a->data[i];
                a->data[i]=temp;
            }
        }
    }
}

void prntAry(Array *a,int perLine){
    for(int i=0;i<a->size;i++){
        cout<<a->data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }   
}

Array *filAray(int n){
    Array *a=new Array;
    a->data=new int[n];
    a->size=n;
    for(int i=0;i<n;i++){
        a->data[i]=rand();//%90+10;//Totally Random no repeats
    }
    return a;
}

void mrkSrt3(Array *a){
    for(int i=0;i<a->size-1;i++){
        smlPos(a,i);
    }
}

void smlPos(Array *a,int pos){
    for(int i=pos+1;i<a->size;i++){
        if(a->data[pos]>a->data[i])swap1(a->data[pos],a->data[i]);
    }
}


void swap1(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}