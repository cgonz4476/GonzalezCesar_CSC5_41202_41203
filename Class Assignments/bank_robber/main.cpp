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
const char wtBill=1;//Weight in gram
const char cnvLbs=1.0f/453.5f;//Conversion from grams to lbs
const char cnvNikls=5;//Cents per nickel
const char cnvpnDl=100;//Conversion from pennies to dollars

//function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare variables
        unsigned int amtStl;//Amount to steal
        unsigned short denom;//Bill denomination
        unsigned char wtPers=80;//Weight person can carry in lbs
        unsigned char nPerps;//Number of perpetrators
        //Input the number of coins
        cout<<"How much money would you like to acquire?"<<endl;
        cin>>amtStl;
        cout<<"What is the bil denomination desired?"<<endl;
        cin>>denom;

    //calculate the total
    nPerps=cnvLbs*amtStl*wtBill/denom/wtPers;   
              
    //Output the results
        cout<<"Amount Desired $"<<endl;
        cout<<"Denomination Desired=$"<<denom<<endl;
        cout<<"Number of Individuals required on the job="<<static_cast<int>(nPerps)<<endl;
    
    //exit sage right
    return 0;
}
