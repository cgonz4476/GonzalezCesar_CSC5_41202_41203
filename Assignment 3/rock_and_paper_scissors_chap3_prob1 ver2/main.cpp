/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 20, 2016, 8:54 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;
    //User libraries
    

    //global constants


    //function prototypes


    //execution begins here
    int main(int argc, char** argv) {
        //The problem to solve
        cout<<endl<<"Solution to savitch 7th ed chap3 pro1"<<endl;
        cout<<endl<<"The rock paper scissors game"<<endl<<endl;
        //Set he random number seed
    srand(static_cast<unsigned int>(time(0)));
    
        //Declare and initialize variables for approxPI
    char computr;   //The computer play
    char player;    //the players move
    char qwstion;    //Question,
        //Input  the players turn
    
    do{ 
        cout<<"What is your move P,R,S?"<<endl;
        cin>>player;
        player=toupper(player);
    }while(!(player=='P'||player=='R'||player=='s'));
        
        //Computer generated play
    do{
        computr=rand()%4+80;
    }while(computr=='Q');
        
        //Output the results
        cout<<"The computer played "<<computr<<endl;
        cout<<"The players move "<<player<<endl;
        
        //Determine the result
        if (computr==player){
            cout<<"The result is a tie"<<endl;
        }else if (player=='P'&&computr=='R'){
            cout<<"The player wins!"<<endl;
        }else if (player=='R'&&computr=='S'){
            cout<<"THe player wins!"<<endl; 
        }else if (player=='P'&&computr=='R'){
            cout<<"The player wins!"<<endl;
        }else if (player=='P'&&computr=='R'){
            cout<<"he player wins!"<<endl;
            
        
        }
    //Exit stage right    
        

    return 0;
}

