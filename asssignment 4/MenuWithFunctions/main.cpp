/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 20, 2016, 8:54 AM
 */

#include <iostream> //I/O
#include <iomanip>  //Formating 
using namespace std;
    //User libraries
    

    //global constants


    //function prototypes


    //execution begins here
    int main(int argc, char** argv) {
        //The problem to solve
        cout<<endl<<"Solution to Gaddis 8thED Chap5 Prob12"<<endl;
        cout<<endl<<"Display a Tempature Table"<<endl<<endl;
        //Declare variables
        unsigned short nS
        
        
        //Loop to generate the degree Centigrade and output the table
        cout<<"Fahrenheit  Celsius  Celsius "<<endl;
        cout<<fixed<<setprecision(2)<<showpoint;
        for (int f=f1;f<=f2;f++){
            float ceq=slope*(f-intrcpt);
            float cintrp=c1+static_cast<float>(f-f1)/(f2-f1)*(c2-c1);
            cout<<setw(8)<<f<<setw(8)<<ceq<<setw(8)<<cintrp<<endl;
        
        }
    //Exit stage right    
        

    return 0;
}

