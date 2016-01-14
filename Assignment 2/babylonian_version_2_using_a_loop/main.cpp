/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 14, 2016, 10:28 AM
 */



#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User libraries

//Global Constants

//Function Prototypes

int main(int argc, char** argv) {
    //Declare and initialize variables
    float n;//
    float r,guess;//intermediate values which asympomatically approach sqrt:(n)
    float to1=0.00e-15;
    int counter=0;
    //Input data
    cout<<"Input the value to computer the sqrt of?"<<endl;
    cin>>n;
    
    //Approximate the square root first pass
    guess=n/2; 
    r=n/guess;
    guess=(guess+r)/2;
   
    //Output the data
    cout<<"The input value = "<<n<<endl;
    cout<<"SQRT=("<<n<<")="<<sqrt(n)<<endl;
    
    //approximate the square root of the second pass
    do{
            r=n/guess;
            guess=(guess+r)/2;
            counter++;
    }while(abs((r-guess)/guess)*100>to1);
    
    cout<<" The r = "<<r<<endl;
    cout<<"The guess = "<<guess<<endl;
    cout<<"The loop executed " <<counter<<"x"<<endl;
    
   
    return 0;
    
}

