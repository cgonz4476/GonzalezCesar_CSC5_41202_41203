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
        cout<<endl<<"Solution to savitch 7th ed chap3 pro1"<<endl;
        cout<<endl<<"The rock paper scissors game"<<endl<<endl;

    srand(static_cast<unsigned int>(time(0)));
    char computr;   //The computer play
    char player;    //the players move
    //Input the number of terms 

    //Computer Generated play
    do{ 
        cout<<"What is your move P,R,S?"<<endl;
        cin>>player;
        player=toupper(player);
    }while(!(player=='P'||player=='R'||player=='s'));
        
    //Output the results
    do{
        computr=rand()%4+80;
    }while(computr=='Q');
        
    //Output the results
        cout<<"The computer played "<<computr<<endl;
        cout<<"The players move "<<player<<endl;
   
        //Exit stage right    
        

    return 0;
}

