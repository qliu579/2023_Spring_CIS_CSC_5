/* 
 * File:   main.cpp
 * Author: Your Name
 * Created on March 23rd, 2023, 9:47 AM
 * Purpose:  Astrology Problem
 */

//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY!!!!

//Function Prototypes

//Execution Begins HERE!!!!
int main(int argc, char** argv) {
   //Declare variables
    const int SIZE=12;//Because Sagittarius is length 11 with 1 for null terminator
    char sign1[SIZE];
    string sign2;
    string element2,element1;
    
    //Initialize Inputs
    cout<<"Type in 2 signs to determine if they are compatible"<<endl;
    cout<<"The signs are:"<<endl
            <<"     FIRE (Aries, Leo, Sagittarius), "<<endl<<
              "     EARTH (Taurus, Virgo, Capricorn), "<<endl<<
              "     AIR (Gemini, Libra, Aquarius) , "<<endl<<
              "     WATER (Cancer, Scorpio, Pisces)"<<endl;
    cin>>sign1>>sign2;
    
    //Map Inputs to Outputs - Process
   element1 = strcmp(sign1,"Aries")==0 || strcmp(sign1,"Leo")==0 || 
                             strcmp(sign1,"Sagittarius")==0?"FIRE":
              strcmp(sign1,"Taurus")==0 || strcmp(sign1,"Virgo")==0 || 
                             strcmp(sign1,"Capricorn")==0?"EARTH":
              strcmp(sign1,"Gemini")==0 || strcmp(sign1,"Libra")==0 || 
                             strcmp(sign1,"Aquarius")==0 ?"AIR":
              "WATER";
    element2 = sign2=="Aries" || sign2=="Leo"   || sign2=="Sagittarius"?"FIRE":
               sign2=="Taurus"|| sign2=="Virgo" || sign2=="Capricorn"?"EARTH":
               sign2=="Gemini"|| sign2=="Libra" || sign2=="Aquarius"?"AIR":
               "WATER";
    
    //Display output
    cout<<sign1<<(element1==element2?" is ":" is not ")<<"compatible with "
        <<sign2<<endl;
    cout<<sign1<<" is a "<<element1<<" sign!"<<endl;
    cout<<sign2<<" is a "<<element2<<" sign!"<<endl;
    
    //Exit stage right
    return 0;
}