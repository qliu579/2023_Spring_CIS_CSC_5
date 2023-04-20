/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 18, 2022, 11:40 AM
 * Purpose:  Fill a File with cards
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <fstream>   //File Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes
void wrtFile(fstream &,char);
char cSuit(int);
char cFace(int);

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    const char NCARDS=52;
    fstream out;
    
    //Write the file
    wrtFile(out,NCARDS);
    
    //Clean up files
    out.close();

    //Exit the program
    return 0;
}

char cFace(int card){
    //Declare face and mod
    char face;
    char cmod=card%13;
    
    //Choose the face card
    face=cmod==0?'A':
         cmod==1?'2':
         cmod==2?'3':
         cmod==3?'4':
         cmod==4?'5':
         cmod==5?'6':
         cmod==6?'7': 
         cmod==7?'8':
         cmod==8?'9':
         cmod==9?'T':
         cmod==10?'J':
         cmod==11?'Q':'K';
    
    return face;
}

char cSuit(int card){
    //Declare suit
    char suit;
    
    switch(card/13){
        case 0:suit='S';break;
        case 1:suit='D';break;
        case 2:suit='C';break;
        default:suit='H';
    }
    return suit;
}

void wrtFile(fstream &out,char NCARDS){
    //Declare variables
    char suit;
    char face;
    
    //Initialize Variables
    out.open("cards.dat",ios::out);
    
    //Map the inputs/known to the outputs
    for(int card=0;card<NCARDS;card++){
        suit=cSuit(card);
        face=cFace(card);
        out<<face<<suit<<endl;
        cout<<face<<suit<<endl;
    }
}