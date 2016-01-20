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
const float PI=4*atan(1);
const float MXRND=pow(2,31);
//function prototypes

//execution begins here
int main(int argc, char** argv) {
        //Declare and Initialize variables for etox
    const unsigned char nTerms=13;
    float etox=1,x;//e'x
    //input the value x
    cout<<endl<<"Soluion to savitch 8th ed chap3 prob12"<<endl;
    cout<<endl<<"The finite sum for PI"<<endl<<endl;
    
    //calculate e^x

    unsigned int n,factN=1;//N and N!
    
        //Input data
        cout<<endl<<""<<endl;
        cout<<""<<endl;
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


