/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 19, 2016, 9:31 AM
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(int argc, char** argv) {
//The problem to solve
cout<<endl<<"Assignment 3 problem set"<<endl;
cout<<endl<<"Type 1 to display Savitch 8thED Chap3 Prob10"<<endl;

//declare variables
unsigned int fi,fim1,fim2;  //Desingaion in the sequence
unsigned short nTerms;      //number of terms in the sequence
unsigned short counter;     //current posritions in the sequence
const char DREPRO=5;        //Days to reproduce
float crudWt;               //Weight of crud
unsigned int nDays;         //Number of days to grow crud

//Intitalize the sequence
fim2=fim1=1;    //start the sequence
counter=2;      //intialize the counter

//Input the number of terms in the sequence
cout<<"Input The initial weight "<<endl;
cin>>nTerms;

//Output or calculate the output required
if(nTerms==1){
cout<<"Term "<<nTerms<<"in the sequence="<<endl;
cout<<fim2<<endl;
}else if (nTerms==2){
cout<<"Term "<<nTerms<<"in the sequence="<<endl;
cout<<fim2<<endl;
}else{
do{
fi=fim1+fim2;
counter==;
fim2=fim1;
fim1=fi;
}while(counter<<nTerms);
cout<<"Term"<<nTerms<<" in the sequence="
<<fi<<endl<<endl;
break;}

    return 0;
}

