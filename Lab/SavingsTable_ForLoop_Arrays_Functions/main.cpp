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

//Function Prototypes
void calcTab(float[],float[],float,int[],int[],int);
void display(const float[],const float[],const float,const int[],const int[],
        const int);
void init(float &,float &,int &,float [],int []);

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=150;//Size to allocate Array
    float   balance,//Balance to start $'s
            intRate,//Interest in %
            interest[SIZE],//Interest Array
            savings[SIZE];//Savings accumulated in $'s
    int     numCmpd,//Number of years, compounding periods
            yr[SIZE],//Year Array
            d8[SIZE];//Date Array
    
    //Initial Variables
    init(balance,intRate,numCmpd,savings,d8);
    
    //Map the Inputs to the Outputs
    calcTab(savings,interest,intRate,yr,d8,numCmpd);
    
    //Display the Inputs and Outputs
    display(savings,interest,intRate,yr,d8,numCmpd);

    //Exit the code
    return 0;
}

void init(float &balance,float &intRate,int &numCmpd,float savings[],int d8[]){
    balance=1e2f;//$100
    intRate=6.0/PERCENT;//6 Percent
    numCmpd=24;//12 Years
    savings[0]=balance;
    d8[0]=2022;
}

void display(const float savings[],const float interest[],const float intRate,
                              const int yr[],const int d8[],const int numCmpd){
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"      $ "<<savings[0]<<"  = Initial Balance in $'s"<<endl;
    cout<<"         "<<intRate*PERCENT<<"%  = Interest Rate %"<<endl;
    cout<<endl;
    cout<<"              Balance      Interest"<<endl;
    cout<<"Year  Date  Beg of Year  End of Year"<<endl;
    for(int year=0;year<=numCmpd;year++){
        cout<<setw(4)<<yr[year]<<setw(6)<<d8[year]
                <<"   $"<<setw(7)<<savings[year]<<"      $"<<setw(7)
                <<interest[year]<<endl;
    }
}

void calcTab(float savings[],float interest[],float intRate,
                              int yr[],int d8[],int numCmpd){
    for(int year=0;year<=numCmpd;year++){
        yr[year]=year;
        interest[year]=savings[year]*intRate;
        d8[year+1]=d8[year]+1;
        savings[year+1]=savings[year]+interest[year];
    }
}