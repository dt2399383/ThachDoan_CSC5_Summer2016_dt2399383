/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 03, 2016, 5:00 PM
 * Purpose: Time Calculator
 */

//System Libraries
#include <iostream> //Input/Output
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float secs;
    
    //Input Data
    cout<<"Welcome to the Time Calculator!"<<endl;
    cout<<"Please enter the amount of time in seconds"<<endl;
    cin>>secs;
    
    //Process the Data
     
    
    if(secs<60){
        cout<<"That is equivalent to "<<secs<<" seconds"<<endl;
    }else if (secs<=3600){
        cout<<"That is equivalent to "<<secs/60<<" minute(s)"<<endl;
    }else if (secs<=86400){
        cout<<"That is equivalent to "<<secs/3600<<" hour(s)"<<endl;
    }else{
        cout<<"That is equivalent to "<<secs/86400<<" days"<<endl;
    }
    //Output the processed data
    
    //Exit Stage Right!
    return 0;
}

