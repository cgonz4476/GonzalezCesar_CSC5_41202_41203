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
const char cnvqrtr=25;//Cents per quarters
const char cnvDimes=10;//cents per dime
const char cnvNikls=5;//Cents per nickel
const char cnvpnDl=100;//Conversion from pennies to dollars

//function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare
        unsigned char  nQrtrs,nNikls,Ndimes;//Declare inputs, numbers of Q,D,N
        unsigned short total;//total 
        
        //Input the number of coins
        cout<<"How many quaters do you have 0-9"<<enl;
        cin>>nQrtrs;
        cout<<"How many dimes do you have 0-9"<<endl;
        cin>>nDimes;
        cout<<"How many nickels do you have 0-9"<<endl; 
        cin>>nNikls;

    //calculate the total
    total=nQrtrs-48 *cnvQrtr+nDimes-45*cnvDime   
              
            
          
        
    //Output the results
        cout<<"How many quaters do you have 0-9"<<endl;
        cin>>nQrtrs;
        out<<
    
    //exit sage right
    return 0;
}
