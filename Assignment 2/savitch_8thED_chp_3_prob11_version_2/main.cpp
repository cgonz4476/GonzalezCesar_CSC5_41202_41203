/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 19, 2016, 10:36 AM
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//user libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
        //Declare and Initialize variables for etox
    const unsigned char nTerms=13;
    float etox=1,x;//e'x
    //input the value x
    cout<<"input x of e^x computation"<<endl;
    cin>>x;
    
    //calculate e^x

    unsigned int n,factN=1;//N and N!
    
        //Input data
        cout<<endl<<"Enter the number you would like to compute the factorial n!"<<endl;
        cout<<"The limit of this calculation is 15"<<endl;
        cin>>n;
        
        //calculate e^x
        for(int i=1;i<=n;i++){
            factN*=i;
        }
        
        //calculate e6x with the above factorial
        etox+=pow(x,n)/factN;

        //Output the results 
        cout<<"The exact  value of e^"<<x<<"="<<exp(x)<<endl;
        cout<<"The approx value of e^"<<x<<"="<<etox<<endl<<endl;

        return 0;}


