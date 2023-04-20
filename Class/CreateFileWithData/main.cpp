/* 
 * File:   main.cpp
 * Author: Your Name
 * Created on April 4th, 2023, 9:43 AM
 * Purpose:  Create a file and fill with Data
 */

//System Libraries
#include <iostream>  //I/O Library
#include <fstream>   //File Stream Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Set the random number seed
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY!!!!

//Function Prototypes

//Execution Begins HERE!!!!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    fstream out;
    int rows;//[5 to 15 rows]
    int cols;//[5 to 15 cols]
    
    //Initialize Inputs
    rows=rand()%11+5;//[5 to 15 rows]
    cols=rand()%11+5;//[5 to 15 cols]
    out.open("out.dat",ios::out);
    
    //Map Inputs to Outputs - Process
    cout<<"File Table Contents"<<endl;
    cout<<"Number of Rows = "<<rows<<endl;
    cout<<"Number of Cols = "<<cols<<endl;
    for(int row=1;row<=rows;row++){
        for(int col=1;col<=cols;col++){
            int number=rand()%90+10;//[10-99]
            out<<number<<" ";
            cout<<number<<" ";
        }
        out<<endl;
        cout<<endl;
    }
    out<<endl;
    cout<<endl;

    //Clean up files
    out.close();

    //Exit stage right
    return 0;
}

