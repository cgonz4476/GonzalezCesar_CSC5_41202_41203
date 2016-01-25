/* 
    File:   main.cpp
    Author: Cesar Gonzalez
    Created on January 25, 2016, 08:36 AM
    Purpose: Simple Game
 */

//System libraries
#include <cmath>    //Srand and rand function
#include <cstdlib>
#include <cmath>
using namespace std;

//User libraries

//Global Constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
//Set he random number seed
    srand (static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    const unsigned short GAMES=36000;//MAX NUMBER OF THROWS
    //FREQUENCY OF OUR DICE THROWS
    unsigned short frq2=0,frq3=0,frq4=0,frq5=0,frq6=0;
    unsigned short frq7=0,frq8=0,frq9=0,frq10=0,frq11=0,frq12=0;
    unsigned short win=0,losses=0;
    //DIFFERENCE BETWEEN CAPACITY AND UTILIZATION  
//INPUT DATA

//THROW THE DICE
for(int game=1;game<=GAMES;game++){
    char die1=rand()%6+1;
    char die2=rand()%6+1;
    char sum=die1+die2;
    if (sum==2||sum==3||sum==12)losses++;
    else if (sum==7||sum==11)wins++;
    else{
        //roll again
        bool kpRin=true;
        do{
            die1=rand()%6+1;
            die2=rand()%6+1;
            char sum2=die1+die2;
            if (sum2==sum7)(wins++;kpRin=false;)
            else if (sum==sum2)(losses++;kpRin=false;)
        }while(kpRin);    
    }    
}

//OUTPUT THE RESULTS
    cout<<"out of "<<GAMES<<"played"<endl;
    cout<<"you won"<<wins<<"games and"<<endl;
    cout<<"you lost"<<losses<<"games"endl;
    cout<<"your wins and losses total ="<<wins+losses<<endl;
            
    return 0;      
}