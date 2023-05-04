/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 2nd, 2023, 10:45 AM
 * Purpose:  Multiplication Table
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cmath>      //Math Library
#include <ctime>      //For random number generator
#include <cstdlib>    //Random Function
#include <iomanip>    //Format the table
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions const to follow

//Function Prototypes
int cSize(char[]);

//Execution Starts Here
int main(int argc, char** argv){
    //Set Random Number Seed Here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables - Known and Unknown, units, range, description
    int nRows,//Rows in Array
       nCols, //Number of Columns in the array
      colWid, //Column Width
     headWid, //Heading Width
      cHdWid; //Column Heading Width
    char head[]="Multiplication Table";
    char colhd[]="Column Values";
    
    //Initialize Variables
    nRows=rand()%7+3;//[3,9] rows
    nCols=rand()%7+3;//[3,9] cols
    colWid=5;
    headWid=cSize(head);
    cHdWid=cSize(colhd);
    
    //Map inputs to outputs -> i.e. process the inputs
    //Center
    //            1st Col         Margins              + SETW
    int center = colWid/2 + (nCols*colWid-headWid)/2 + headWid;
    cout<<setw(center)<<head<<endl<<endl;
    
    //Heading for each Column
    center = colWid/2 + (nCols*colWid-cHdWid)/2 + cHdWid;
    cout<<setw(center)<<colhd<<endl<<endl;
    for(int col=1;col<=nCols;col++){
        cout<<setw(colWid)<<col;
    }
    cout<<endl;
    for(int col=1;col<=(nCols+1)*colWid;col++){
        cout<<"-";
    }
    cout<<endl;
    
      
    //Table
    for(int row=1;row<=nRows;row++){
        for(int col=1;col<=nCols;col++){
            cout<<setw(colWid)<<row*col;
        }
        cout<<endl;
    }
    
    //Display the outputs
    
    //Clean up - File closing, memory deallocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations
int cSize(char a[]){
    int cnt=0;
    while(a[cnt]!='\0')cnt++;
    return cnt++;
}