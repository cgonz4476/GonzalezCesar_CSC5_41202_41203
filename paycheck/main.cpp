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
    float   payRate=1e1f;//Pay Rate in $'s/hour
    unsigned char hrsWrkd=40;   // Hours worked (hrs))
        
    //Calculate or map inputs o outputs
    float payChk=payRate*hrsWrkd;
    
    //output the results
    cout<<"Pay Rate =$"     <<payRate<<"'s/hr"<<endl;
    cout<<"hours Worked ="  <<hrsWrkd<<"hrs"<<endl;
    cout<<"Hours Worked ="  <<static_cast<int>(hrsWrkd)<<"hrs"<<endl;    
    cout<<"Pay Check =$"    <<payChk<<endl;
    
   
  //Exit stage right
    return 0;
}

