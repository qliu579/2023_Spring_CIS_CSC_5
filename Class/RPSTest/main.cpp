/* 
 * File:   main.cpp
 * Author: Malachi Ferrett
 * Created on March 18, 2023 3:42 PM
 * Purpose:  Rock Paper Scissors
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <cstring>   //String Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variable
  
    //Initial Variables
    char player1,
         player2;
    cout<<"Rock Paper Scissors Game\n"; 
    cout<<"Input Player 1 and Player 2 Choices\n";
    cin>>player1;
    cin>>player2;
            
    if(player1 == 'P' || 'p' && player2 == 'R'|| 'r'){
            cout<<"Paper covers rock.";
    }else if (player1 == 'R' || 'r' && player2 == 'S' || 's'){
            cout<<"Rock breaks scissors.";
    }else if (player1 == 'S' || 's' && player2 == 'P' || 'p'){
            cout<<"Scissors cuts paper.";    
    }else if(player2 == 'P' || 'p' && player1 == 'R' || 'r'){
            cout<<"Paper covers rock.";
    }else if(player2 == 'R' || 'r' && player1 == 'S' || 's'){
            cout<<"Rock breaks scissors.";
    }else if (player2 == 'S' || 's' && player1 == 'P' || 'p'){
                cout<<"Scissors cuts paper.";
    }else if(player1 == 'R' || 'r' && player2 == 'R'|| 'r' ||
      player1 == 'P' || 'p' && player2 == 'P' || 'p' ||
      player1 == 'S' || 's' && player2 == 's' || 's'){
            cout<<"Who Won? -> Tie\n";
    }
    //Exit the code
  return 0;
        }