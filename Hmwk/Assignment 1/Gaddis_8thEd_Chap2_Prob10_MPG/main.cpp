/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on June 23, 2016, 7:50 PM
 * Purpose: Calculate MPG
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
    int carGasCap = 15;
    int milesDriven = 375;
    int MPG;
    
    //Input Data
    
    //Process the Data
    MPG = milesDriven/carGasCap;
    
    
    //Output the processed data
    cout<<"Car's Gas Capacity          = "<<carGasCap<<" gallons."<<endl;
    cout<<"Miles Driven                = "<<milesDriven<<" miles."<<endl;
    cout<<"Miles per Gallon of the car = "<<MPG<<" MPG."<<endl;
    
    
    //Exit Stage Right!
    return 0;
}

