/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 20, 2016, 8:54 AM
 */

#include <iostream> //IO
#include <iomanip>  //Formatting
#include <cmath>

using namespace std;
    //User libraries
    

    //global constants


    //function prototypes


    //execution begins here
    int main(int argc, char** argv) {
        cout<<endl<<"Fun look at savings and rule of 72 "<<endl;
        cout<<endl<<"SAVINGS"<<endl<<endl;

   
    //Declare and initialize variables 
        float balance=100.0f;  //Initialize Balance
        float intRate=0.05f;  //Interest Rate
        float rule72=0.0f/intRate;           //Rule of 72, Future value =2* the present value
        float intErnd;
        //output the table heading
        cout<<"The interest rate ="<<intRate*100<<"  % "<<endl;
        cout<<"Year Year Balance Intrest";
        cout<<rule72<<"Years"<<endl;
        cout<<"Year Year Balance intrest"<<endl;
        cout<<fixed<<setprecision(2)<<showpoint;
        intErnd=balance*intRate;
        cout<<"   0 2016"<<setw(8)<<balance<<setw(8)<<balance*intRate<<endl;
    
    //Calculate the savings
        balance*=(1+intRate);
        for (int y=1, year=2017;y<=50;y++,year++){
            cout<<y<<year<<balance<<balance*intRate<<endl;
            balance*=(1+intRate);
        }

    return 0;
}

