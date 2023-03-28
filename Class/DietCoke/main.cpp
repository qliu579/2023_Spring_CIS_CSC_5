/* 
 * File:   main.cpp
 * Author: Richard
 *Purpose: To show how many grams of artificial sweetener you should not have
 * Created on February 21, 2023 1:54PM
 */


//Block Comments
/*100 pounds, or 45400 grams, for one person will be used for testing.
 * With this you should be getting 6,485.71 grams for lethal amount in humans
 * and 18,531 total cans of diet soda to reach lethal amounts of artificial sweetener (if calculations are right........)
 * 
 * Remember to make it a loop so the user can continue to use the program until
 * they no longer want to.
 */

//System Libraries
#include <iostream>    
using namespace std;                

//Global Constants - Math/Physics/Chemistry/Conversions
const float LBCNVRT = 453.592;    //convert pounds to grams
                                 
//Function Prototypes

// Execution
int main(int argc, char** argv) {
    //declare ALL variables
    float artSwtAmnt,           //Used to calculate amount of sugar in soda (percentage)
             mseMxSwt,          //5 grams of artificial sweetener is lethal to mice
             mseMass,           //35 grams is mass of the mouse
            swtCnvrt,           //used to convert the amount of sweetener a mouse can have, to the amount a human can have
           artSwtSda,           //amount of artificial sweetener in soda can,
            hmnMxSwt;           //max sweetener a human can have in grams
    
    unsigned int sdaMass,        //One can of soda is 350 grams
                   hmnLb,        //User's desired weight in pounds
                   hmnGram,      //User's desired weight in grams
                   mxSda;        //Max number of cans of soda a dieter can consume
                   
            
    //initialize variables/input variables
    artSwtAmnt = 0.001f,  //Used to calculate amount of sugar in soda (percentage)
    mseMxSwt = 5.00f,  //5 grams of artificial sweetener is lethal to mice
    mseMass = 35.00f,  //35 grams is mass of the mouse
    sdaMass = 350;  //One can of soda is 350 grams
   
    //Map input to output/process
    cout << "This program is to display how many cans of diet soda are " <<
            "to someone based on their desired weight." << endl;
    cout << "Please enter the desired weight you would like to be at " <<
            "in pounds." << endl;
    cin >> hmnLb;
    
    //Computations process
    artSwtSda = sdaMass * artSwtAmnt;   //How much artificial sweetener is in soda
    swtCnvrt = mseMxSwt / mseMass;    //The amount of sweetener a mouse can have proportionate to mass

    hmnGram = hmnLb * LBCNVRT;        //Convert humans weight in pounds to grams
    hmnMxSwt = hmnGram * swtCnvrt;      //Amount of artificial sweetener one can consume till lethal
    //mxSda = hmnMxSwt / artSwtSda;          //Max soda cans one person can consume till artificial sweetener is lethal
    mxSda = hmnLb * LBCNVRT * mseMxSwt / (mseMass *sdaMass * artSwtAmnt);
    
    //display output
    cout << hmnGram << endl;
    cout << artSwtSda << endl;

    cout << "The max amount of artificial sweetener you can have is: " <<
            hmnMxSwt << "g" << endl;
    
    cout << "The max amount of diet soda cans you can have as a result is: " <<
            mxSda << endl;
    
    
    //exit program
    
    
    return 0;
}