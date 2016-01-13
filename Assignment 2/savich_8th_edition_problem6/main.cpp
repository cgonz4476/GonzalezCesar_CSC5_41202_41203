/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 13, 2016, 10:15 AM
   Purpose: Room Capacity
 */

#include <iostream>
#include <iomanip>
using namespace std;
    //user Libraries   
    //Function Prototypes


    
int main(int argc, char** argv) {
    const unsigned char MAXCAP=35;  //Max Capacity of the room
    unsigned short stUtil;          //Seats Utilized 
    char delta;                  //difference between capacity an utilization
    
//input data
    cout<<"How many seats are being utilized in the BE200"<<endl;
    cin>>stsUtil;
    
    //Calculate or amp inputs to outputs
    delta=MAXCAP-stsUtil;
            
    //Output the results
    cout<<"Maximum Room Capacity of BE200="<<static_cast<int>(MAXCAP)       
    <<"seats"<<endl;
    
    if(delta>=0){
        cout<<static_cast<int>(delta)<<"class will be held"<<endl;
        cout<<delta<<"available seats remain!";
        cout<<fixed<<setprecision(1)<<endl;
        cout<<"Percentage capacity utilized= "
                <<100.0f*stsUtil/MAXCAP<<"$"<<endl;
    }else{
        cout<<"Room capacity as been exceed!,";
        cout<<static_cast<int>(-delta)<<"Students need to leave!"<<endl;
    }
    
    return 0;
}

