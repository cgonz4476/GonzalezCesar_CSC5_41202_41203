/* 
    File:   main.cpp
    Author: Cesar Gonzalez
    Created on January 25, 2016, 08:36 AM
    Purpose: Power Function Example
 */

//System libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

//User libraries

//Global Constants

//Function prototypes
int pow(int,int);

//Execution begins here
int main (int argc, char** argv)
//variables o be used in timing
int begi,endi,begd,end;//Beginning an ending of the integer vs. double function
    //Declare and initialize variables
    int x;//base of the problem
    int y;//Exponent of the problem
    int z;//The result of a^b
    
    //Input data
    cout<<"Input a and b i.e, for a'b?"<<endl;
    cin>>x>>y;
    
    //calculate or map inputs to outputs
    begi=static_cast<unsigned int>(time(0));
    for(int i=0;i<=loop;i++) z=pow(x,y);
    endi=static_cast<unsigned int>(time(0));
    
    //Output the results
    cout<<"Library Function Results "<<dx<<"^"<<dy<" = "<<dz<<endl;
    cout<<"The total time taken="<<endd-begg
    
    //exit stage right
    return 0;
}
    /*                          Power Function                                */
    
    //Inputs
    // a->integer base
    //->b integer PowerExponent
int pow(int a,int b){
    if(b<=0)return 1;
    if (b==1)return a;
    int abd2=pow(a,b/2);
    if(b%2)return abd2*abd2;    //if even
    return abd2*abd2*a;         //else odd
}