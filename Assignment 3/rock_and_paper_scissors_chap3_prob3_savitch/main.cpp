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
        cout<<endl<<"Solution to savitch 9th ED chap3 pro3"<<endl;
        cout<<endl<<"The Roman Numeral Conversion Program"<<endl<<endl;
        //Set the random seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables 
    unsigned short numbr=rand()%2001+1000;// (1000,3000)
    unsigned char n1000s,n100s,n10s,n1s;//Number of 10'x's
    cout<<"the number to convert"<<endl;
    
    //Calculate the number of 1000's,100's,10's,1's
    n1000s=(numbr-numbr%1000)/1000;   //Number of 1000s
    numbr=(numbr-n1000s*1000);        //subtract off 1000s
    n100s=(numbr-numbr%100)/100;      //Number of 100s
    numbr=(numbr-n100s*100);          //Subtract off 100's
    n10s=(numbr-numbr%10)/10;         //Number of 10s
    n1s=(numbr-n10s*10);               //Subtract off the 10s to get 1's
    
    cout<<"The Number to convert="  <<static_cast<int>(numbr)<<endl;
    cout<<"The Number of 1000's="  <<static_cast<int>(n1000s)<<endl;
    cout<<"The Number of 100's="  <<static_cast<int>(n100s)<<endl;
    cout<<"The Number of 10's="  <<static_cast<int>(n10s)<<endl;
    
    //Output the results
    cout<<"The Roman Numerals Equivalent=";
        
        
    //Output the 1000s
    switch(n1000s){
        case 3: cout<<"M";
        case 2: cout<<"M";
        case 1: cout<<"M";
    }
            //Output the 100s
    switch(n100s){
        case 9: cout<<"CM";break;
        case 8: cout<<"DCCC";break;
        case 7: cout<<"DCC";break;
        case 6: cout<<"DC";break;
        case 5: cout<<"D";break;
        case 4: cout<<"C";break;
        case 3: cout<<"CM";break;
        case 2: cout<<"DCCC";break;
        case 1: cout<<"DCC";break;}
    //Output the 10s
    switch(n10s){
        case 9: cout<<"XC";break;
        case 8: cout<<"LXXX";break;
        case 7: cout<<"LXX";break;
        case 6: cout<<"LX";break;
        case 5: cout<<"L";break;
        case 4: cout<<"XL";break;
        case 3: cout<<"X";break;
        case 2: cout<<"x";break;
        case 1: cout<<"x";break;}
      //Output the 1s
    switch(n1s){
        case 9: cout<<"IX";break;
        case 8: cout<<"VIII";break;
        case 7: cout<<"VII";break;
        case 6: cout<<"VI";break;
        case 5: cout<<"V";break;
        case 4: cout<<"IV";break;
        case 3: cout<<"I";break;
        case 2: cout<<"I";break;
        case 1: cout<<"I";break;}
        //Exit stage right    
        

    return 0;
}

