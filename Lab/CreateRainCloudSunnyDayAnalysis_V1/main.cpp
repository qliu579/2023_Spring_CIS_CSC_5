/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 4th, 11:30 AM
 * Purpose:  Create a Data File
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <fstream>    //File I/O Library
#include <cmath>      //Math Library
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions const to follow

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv){
    //Set Random Number Seed Here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables - Known and Unknown, units, range, description
    const int ROWS=10,COLS=100;//Number of rows and cols for 2 D Array
    fstream in;
    int nMonths,nDays;
    char data[ROWS][COLS];
    int  summary[ROWS][ROWS];
    
    //Initialize Variables
    in.open("weather.dat",ios::in);
    in>>nMonths>>nDays;
    for(int month=0;month<nMonths;month++){
        for(int day=0;day<nDays;day++){
            in>>data[month][day];
            cout<<data[month][day]<<" ";
        }
        cout<<endl;
    }
    
    //Map inputs to outputs -> i.e. process the inputs
    //Initialize the summary array
    for(int row=0;row<nMonths;row++){
        for(int col=0;col<nMonths;col++){
            summary[row][col]=0;
        }
    }
    //Fill the summary data with information
    for(int month=0;month<nMonths;month++){
        for(int day=0;day<nDays;day++){
            if(data[month][day]=='R'){
                summary[month][0]++;
            }else if(data[month][day]=='C'){
                summary[month][1]++;
            }else if(data[month][day]=='S'){
                summary[month][2]++;
            }else{
                cout<<"Bad Data Stop Program"<<endl;
                exit(0);
            }
        }
    }

    //Display the outputs
    for(int row=0;row<nMonths;row++){
        for(int col=0;col<nMonths;col++){
            cout<<summary[row][col]<<" ";
        }
        cout<<endl;
    }
    
    //Clean up - File closing, memory deallocation, etc....
    in.close();

    //Exit Stage Right!
    return 0;
}

//Function Implementations