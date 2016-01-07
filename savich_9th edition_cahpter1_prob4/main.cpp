/* 
 * File:   main.cpp
 * Author: Gonzalez,Cesar
 * Created on January 7, 2016, 10:55 AM
 */
//system Libraries
#include <iostream> //I/O Library
#include <cstdlib> //Random function location
#include <cmath> //Math functions
#include <ctime> //Time to set the random seed
#include <iomanip>// Format Library
#include <fstream>//Reading /writing to a file
using namespace std;

//User Libraries


//Global Constant
    const float GRAVITY=32.174f;//Sea level Earth Acceleration constant ft/sec"2

//function Prototypes

//Execution Begins Here
        int main(int argc, char** argv) {
        //set he random number seed
        srand(static_cast<unsigned int>(time(0)));
        
//Declare variables
        ofstream out;//Declare a file stream object called out
        float drpTime,distance;// Time in sec and distance in feet;
        
//Inputting the time with a random number and opening a file
        drpTime=rand()%11+10;//[10,20]secs
        const int SIZE=21;
        char fileNam[SIZE]="DropDistance.dat";
        out.open(fileNam);
    
//calculate the number of fellow perpetrators
        distance=0.5f*GRAVITY*drpTime*drpTime;
    
//Output the results
        cout<<"Drop Time = "<<drpTime<<"(sec)"<<endl;
        cout<<fixed<<setprecision(3)<<showpoint;//Format the distance to 3 decimals
        cout<<"Free Fall Distance = "<<setw(20)<<distance<<"(ft)"<<endl;
//Output the results to a file
        out<<fixed<<setprecision(3)<<showpoint;//format the distance to 3 decimals
        out<<"Free Fall Distance exp(log)"<<setw(10)<<distance <<"(ft)"<<endl;
//exit sage right make sure to close files
        out.close();
    return 0;
}


