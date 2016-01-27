/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 26, 2016, 8:44 AM
 * Purpose:variations on a savings functions
 */

#include <iostream> //I/O
#include <iomanip>  //Formating 
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
    //User libraries
    

    //global constants
    const char PERCENT=100;
    
    //function prototypes
    float save1(float,float,int);
    float save2(float,float,int);
    float save3(float,float,int);
    float save4(float,float,int);
    float save5(float,float,int);
    float save6(float,int,float=0.05f);
    
    //Execution begins here
    int main(int argc, char** argv) {
        //set the random number seed
        srand(static_cast<unsigned int>(time(0)));
        //declare and initialize
        float pv=rand()%9001+1000;
        float intRate=rand()%11+5;
        char nComp=rand()%16;
        
        //output the random inputs
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The present value=$"<<pv<<endl;
        cout<<"The interest rate="<<intRate<<"$"<<endl;
        cout<<"The number of years ="<<static_cast<int>(nComp)<<endl;
        
        //output the results
        cout<<"the savingsusing power function=$"
                <<save1(pv,intRate/PERCENT,nComp)<<endl;
        cout<<"the savingsusing power function=$"
                <<save1(pv,intRate/PERCENT,nComp)<<endl;
        cout<<"the savingsusing power function=$"
                <<save1(pv,intRate/PERCENT,nComp)<<endl;
        cout<<"the savingsusing power function=$"
                <<save1(pv,intRate/PERCENT,nComp)<<endl;
        cout<<"the savingsusing power function=$"
                <<save1(pv,intRate/PERCENT,nComp)<<endl;
        cout<<"the savingsusing power function=$"
                <<save1(pv,intRate/PERCENT,nComp)<<endl;
                
                       
    }
    //Exit stage right    
    return 0;
    
}

//****************************************************************************//
//****************************************************************************//
//Inputs
// p->Present values's
    //I->Interest rate%
    //n->Number 
//Output
//fv-<future values $'s
//note: Using the for loop function
    float save1 (float p,float i,int n){
        for(int years=1;years<=n;years++){
            p*=(1=i)
        
        return p*=(1+i),(n);
    }