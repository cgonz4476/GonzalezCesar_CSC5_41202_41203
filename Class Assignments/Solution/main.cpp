/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 11, 2016, 11:18 AM
 */

//System libraries
#include <iostream>
using namespace std;

//User libraries

//Global Constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    bool score1=80
    bool score2=60
    
    //create heading 
    cout<<pass<<endl;
    
    //first row
    cout<<(x?'T':'F')<<"";
    cout<<(y?'T':'F')<<"";
    cout<<(!x?'T':'F')<<"";
    cout<<(!y?'T':'F')<<"";
    cout<<(x&&y?'T':'F')<<"";
    cout<<(x||y?'T':'F')<<"";
    cout<<(x^y?'T':'F')<<"";
    
    //second row
    x=true;y=false;
    cout<<(x? 'T': 'F')<<" ";
    cout<<(y? 'T': 'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" "<<endl;
    
    //Third row
     x=false;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" "<<endl;
    
    //Fourth row
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" "<<endl;
    //Swap using temp
    
    //Swap using exclusive or operator
    
    //exit stage right

    return 0;
}