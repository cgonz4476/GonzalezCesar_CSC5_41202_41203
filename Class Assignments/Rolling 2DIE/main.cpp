/* 
    File:   main.cpp
    Author: Cesar Gonzalez
    Created on January 25, 2016, 08:36 AM
    Purpose: Testing throwing dice
 */

//System libraries
#include <iostream> //I O
#include <cmath>    //Srand and rand function
#include <cstdlib>
#include <cmath>
using namespace std;

//User libraries

//Global Constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
}
    //variables o be used in timing
const unsigned char MAXTHRW=36000;//MAX NUMBER OF THROWS
//FREQUENCY OF OUR DICE THROWS
unsigned short frq2=0,frq3=0,frq4=0,frq5=0,frq6=0;
unsigned short frq7=0,frq8=0,frq9=0,frq10=0,frq11=0,frq12=0;
unsigned short total;            //DIFFERENCE BETWEEN CAPACITY AND UTILIZATION  
//INPUT DATA

//THROW HE DICE
for(int throws=1;throws<=MAXTHRW;throws++){
    char sum=rand()%
    char die1=rand()%6+1;
    char die2=rand()%6+1;
    char sum=die1+die2;
    switch (sum){
        case 2;frq2++;break;
        case 3;frq3++;break;
        case 4;frq4++;break;
        case 5;frq5++;break;
        case 6;frq6++;break;
        case 7;frq7++;break;
        case 8;frq8++;break;
        case 9;frq9++;break;
        case 10;frq10++;break;
        case 11;frq11++;break;
        case 12;frq12++;break;
        default: cout<<"Not Possible"<<endl;
    }
        
}
total=frq2+frq3+frq4+frq5+frq6+frq7+frq8+frq9+frq9+frq10+frq11+frq12;
//OUTPUT THE RESULTS
cout<<"The throw statistics are "<<endl;
cout<<"2 was thrown"<<frq2<<" times"<<endl;
cout<<"3 was thrown"<<frq2<<" times"<<endl;
cout<<"4 was thrown"<<frq2<<" times"<<endl;
cout<<"5 was thrown"<<frq2<<" times"<<endl;
cout<<"6 was thrown"<<frq2<<" times"<<endl;
cout<<"7 was thrown"<<frq2<<" times"<<endl;
cout<<"8 was thrown"<<frq2<<" times"<<endl;
cout<<"9 was thrown"<<frq2<<" times"<<endl;
cout<<"10 was thrown"<<frq2<<" times"<<endl;
cout<<"11 was thrown"<<frq2<<" times"<<endl;
cout<<"12 was thrown"<<frq2<<" times"<<endl;
    return 0;   
}