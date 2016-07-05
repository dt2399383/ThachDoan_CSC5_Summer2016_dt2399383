/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 03, 2016, 12:50 PM
 * Purpose: MPG
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
    float gasCap, mileCap, mpg;
    
    //Input Data
    cout<<"Calculate your car's MPG!"<<endl;
    cout<<"Please enter the number of gallons your car can hold and "<<endl;
    cout<<"the number of miles that your car can drive on a full tank."<<endl;
    cin>>gasCap>>mileCap;
    
    //Process the Data
    mpg = mileCap/gasCap;
    
    //Output the processed data
    cout<<"Your car gets "<<mpg<<" miles per gallon."<<endl;
    
    //Exit Stage Right!
    return 0;
}

