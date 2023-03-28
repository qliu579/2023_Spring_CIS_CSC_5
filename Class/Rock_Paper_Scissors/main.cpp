//System Libraries
#include <iostream>  //Input/output Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variable
    char player1,//Player Choice RPS -> Rock Paper Scissors
         player2;//Player Choice RPS -> Rock Paper Scissors
        
    //Initial Variables
    cout<<"Rock Paper Scissors Game\n"; 
    cout<<"Input Player 1 and Player 2 Choices\n";
    cin>>player1;
    cin>>player2;
    
    //Validate the input
    player1=player1<97?player1:player1-32;//Upper and lower case
    player2=player2<97?player2:player2-32;//Upper and lower case
    if(player1=='R'||player1=='P'||player1=='S'){
        cout<<"Player 1 = "<<player1<<endl;
    }else{
        cout<<"Player 1 = "<<player1<<endl;
        cout<<"Exit"<<endl;
        exit(1);
    }
    if(player2=='R'||player2=='P'||player2=='S'){
        cout<<"Player 2 = "<<player2<<endl;
    }else{
        cout<<"Player 2 = "<<player2<<endl;
        cout<<"Exit"<<endl;
        exit(1);
    }
            
    //Process inputs to outputs or map
    if(player1 == player2){
        cout<<"Tie was had!"<<endl;
    }else if(player1 == 'P' && player2 == 'R'){
        cout<<"Paper covers rock.";
    }else if (player1 == 'R'&& player2 == 'S'){
        cout<<"Rock breaks scissors.";
    }else if (player1 == 'S'&& player2 == 'P'){
        cout<<"Scissors cuts paper.";    
    }else if(player2 == 'P'&& player1 == 'R'){
        cout<<"Paper covers rock.";
    }else if(player2 == 'R'&& player1 == 'S'){
        cout<<"Rock breaks scissors.";
    }else if (player2 == 'S'&& player1 == 'P'){
        cout<<"Scissors cuts paper.";
    }else{
        cout<<"Can't get to here "<<endl;
    }

    //Exit the code
  return 0;
        }