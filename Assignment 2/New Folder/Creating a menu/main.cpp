/* 
 * File:   main.cpp
 * Author: cesar gonzalez
 *
 * Created on January 19, 2016, 8:34 AM
 */

#include <iostream>
#include <iomanip>
#include <cmath>
    using namespace std;
    //User libraries
    
    //Global constants 
    
    //function prototypes
    
    //Execution begins here
    unsigned short nSoltn;
    int main(int argc, char** argv){
        do{
        cout<<"Assignment 3 problem set"<<endl;
        cout<<"Type 1 to display Savitch 8thED Chap3 Prob10"<<endl;
        cout<<"Type 2 to display problem 2"<<endl;
        cout<<"Type 3 to display problem 3"<<endl;
        cin>>nSoltn;
    }

    switch(nSoltn){
            case 1:}
                cout<<endl<<"Solution to Savitch 8thED Chap3 Prob10"<<endl<<endl;
            cout<<endl<<"The Fibonacci sequence"<<endl<<endl;
            //declare variables
            unsigned int fi,fim1,fim2;//Designations in the sequence
            unsigned short nTerms;//NUmber of terms in he sequence 
            unsigned short counter;//current position in the sequence
            fim2=fim1=1;
            //input the number of terms in the sequence
            cout<<"Input The number of terms in the sequence"<<endl;
            cin>>nTerms;
            //output or calculate the output required
            if(nTerms==1){
                cout<<"Term "<<nTerms<<"in the sequence="
                cout<<fim2<<endl;
            }else if (nTerms==2){
                cout<<"Term "<<nTerms<<"in the sequence=
                cout<<fim2<<endl;
            }else{
                do{
                    fi=fim1+fim2;
                    counter==;
                    fim2=fim1;
                    fim1=fi;
                }while(counter<nTerms);
                cout<<"Term"<<nTerms<<" in the sequence="
                <<fi<<endl<<endl;
                    
                break;
            }
{           case 2:
                
}           cout<<endl;<<'Solution to problem 2"<<endl<<endl; 
            break;
            case 3:
                break;


    return 0;
}