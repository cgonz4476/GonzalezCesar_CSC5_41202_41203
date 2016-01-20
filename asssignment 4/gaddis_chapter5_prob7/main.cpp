/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 20, 2016, 8:54 AM
 * purpose: 
 */


#include <iostream> //I/O
#include <iomanip>  //Formating 
using namespace std;
    //User libraries
    

    //global constants


    //function prototypes


    //execution begins here
    int main(int argc, char** argv) {
        //The problem to solve
        cout<<endl<<"Solution to Gaddis 8thED Chap5 Prob7"<<endl;
        cout<<endl<<"Display a salary table"<<endl<<endl;\

        //Declare variables
        unsigned int salary=1;    //salary starting at a penny
        float totpay=salary;             //Total pay by summing the salary
        
        
        //Loop to generate the degree Centigrade and output the table
        cout<<"$Pay   $Salary    $Total "<<endl;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<setw(4)<<1<<setw(15)<<salary/100.0f<<setw(15)<<totpay/100.0f<<endl;
        for (int day=2;day<=31;day++){
            //salary*=2;
            salary<<=1;
            totpay+=salary;
            cout<<setw(4)<<day<<setw(15)<<salary/100.0f<<setw(15)<<totpay/100.0f<<endl;
        
        }
    //Exit stage right    
        

    return 0;
}

