/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on March 24th, 2022, 12:15 AM
 * Purpose:  Savings Table
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only
const char PERCENT=100;//Percent Conversion
const char COLS=2;//2 D Array Dimension

//Function Prototypes
void calcTab(float[][COLS],float,int[][COLS],int);
void display(const float[][COLS],const float,const int[][COLS],
        const int);
void init(float &,float &,int &,float [][COLS],int [][COLS]);

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=150;//Size to allocate Array
    float   balance,//Balance to start $'s
            intRate,//Interest in %
            savInt[SIZE][COLS];//Savings and Interest accumulated in $'s
    int     numCmpd,//Number of years, compounding periods
            yrd8[SIZE][COLS];//Year Array[0],Date Array[1]
    
    //Initial Variables
    init(balance,intRate,numCmpd,savInt,yrd8);
    
    //Map the Inputs to the Outputs
    calcTab(savInt,intRate,yrd8,numCmpd);
    
    //Display the Inputs and Outputs
    display(savInt,intRate,yrd8,numCmpd);

    //Exit the code
    return 0;
}

void init(float &balance,float &intRate,int &numCmpd,
        float savings[][COLS],int yrd8[][COLS]){
    balance=1e2f;//$100
    intRate=6.0/PERCENT;//6 Percent
    numCmpd=24;//12 Years
    savings[0][0]=balance;
    yrd8[0][1]=2022;
}

void display(const float savInt[][COLS],const float intRate,
                              const int yrd8[][COLS],const int numCmpd){
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"      $ "<<savInt[0][0]<<"  = Initial Balance in $'s"<<endl;
    cout<<"         "<<intRate*PERCENT<<"%  = Interest Rate %"<<endl;
    cout<<endl;
    cout<<"              Balance      Interest"<<endl;
    cout<<"Year  Date  Beg of Year  End of Year"<<endl;
    for(int year=0;year<=numCmpd;year++){
        cout<<setw(4)<<yrd8[year][0]<<setw(6)<<yrd8[year][1]
                <<"   $"<<setw(7)<<savInt[year][0]<<"      $"<<setw(7)
                <<savInt[year][1]<<endl;
    }
}

void calcTab(float savInt[][COLS],float intRate,
                              int yrd8[][COLS],int numCmpd){
    for(int year=0;year<=numCmpd;year++){
        yrd8[year][0]=year;
        savInt[year][1]=savInt[year][0]*intRate;
        yrd8[year+1][1]=yrd8[year][1]+1;
        savInt[year+1][0]=savInt[year][0]+savInt[year][1];
    }
}