/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 19, 2016, 10:36 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
        //Declare and Initialize
    unsigned int n,factN=1;//N and N!
    
        //input data
        cout<<endl<<"Enter the number you would like to compute the factorial n!"<<endl;
        cout<<"The limit of this calculation is 15"<<endl;
        cin>>n;
        
        //calculate the factorial
        for(int i=1;i<=n;i++){
            factN*=i;
        }
        //output the results 
        cout<<n<<"!="<<factN<<endl;
    
    return 0;
}

