/* 
 * File:   main.cpp
 * Author: rcc
 * Created on January 13, 2016, 10:48 AM
 * Purpose: Calculate the square root by the Babylonian/newtowns
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {
//Declare and initialize variables
    float n;//
    float r,guess;//intermediate values which asymptomatically approach sqrt:(n)
    
    cout<<"Input the value to computer the sqrt of?"<<endl;
    cin>>n;
    
    guess=n/2; 
    r=n/guess;
    guess=(guess+r)/2;
    // output data
    cout<<"the input value + "<<endl;
    cout<<"sqrt=("<<n<<")="<<sqrt(n)<<endl;
    cout<<"The first pass r ="<<r<<endl;
    cout<<"The first pass guess ="<<guess<<endl;
    
    
    //Approximate the square root sixth pass     
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results
    cout<<"The second pass r ="<<r<<endl;
    cout<<"the second pass guess ="<<guess<<endl;
    
    
    //Approximate the square root sixth pass      
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the results
    cout<<"The Third pass r     ="<<r<<endl;
    cout<<"the Third pass guess ="<<guess<<endl;
    
    
    return 0;
}

