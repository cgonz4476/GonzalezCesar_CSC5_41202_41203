/* 
    File:   main.cpp
    Author: Cesar Gonzalez
    Created on January 4, 2016, 10:18 AM
    Purpose: check ot IDE
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
    bool x=true;
    bool y=true;
    
    //create heading 
    cout<<"X Y !X !Y &X &Y |X |Y ^X ^Y  X Y "<<endl;
    
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

