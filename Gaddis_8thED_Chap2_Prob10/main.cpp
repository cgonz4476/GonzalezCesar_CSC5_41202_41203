/* 
 * File:   main.cpp
 * Author: Gonzalez,Cesar
 * Created on January 6, 2016, 8:13 AM
 */
//system Libraries
#include <iostream>
using namespace std;

//User Libraries


//Global Constant
const char cnvPerc=100;//Conversion to percentage

//function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
        unsigned short cstSrvy=1650; //Customers surveyed
        unsigned char  peDrnk=15;     //Percentage surveyed energy drinkers
        unsigned char  pcDrnk=58;    //Percentage surveyed energy citrus drinkers
        unsigned short neDrnk,ncrnk;       //Number of energy drikers     
    //calculate the percentage for the military budget
        neDrnk=cstSrvy*peDrnk/cnvPerc;
        ncDrnk=neDrnk*pcDrnk/cnvPerc;
    
    //Output the results
        cout<<"Number of Customers = "<<cstSrvy<<endl;
        cout<<"Percentage of Energy Drinks = "<<static_cast<int>(peDrnk)<<"%"<<endl;
        cout<<"The Percentage of the Federal Budget attributed to the Military Budget= ";
        cout<<"= <<<<endl;
    
    //exit sage right
    return 0;
}
