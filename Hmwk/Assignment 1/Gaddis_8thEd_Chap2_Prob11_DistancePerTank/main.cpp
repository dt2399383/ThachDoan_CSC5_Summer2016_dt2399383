/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on June 23, 2016, 8:00 PM
 * Purpose: Distance For a Tank of Gas for hwy/town.
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
    int carGasCap = 20;
    float townMPG = 23.5;
    float hwyMPG = 28.9;
    float distanceTown, distanceHWY;
    //Input Data
    
    //Process the Data
    distanceTown = carGasCap * townMPG;
    distanceHWY = carGasCap * hwyMPG;
    
    
    //Output the processed data
    cout<<"Car holds a max of "<<carGasCap<<" gallons of gasoline."<<endl;
    cout<<"In town, the car can travel "<<distanceTown<<" miles on a full tank."
            <<endl;
    cout<<"On the highway, the car can travel "<<distanceHWY<<" miles on a "
            <<"full tank."<<endl;
            
    
    //Exit Stage Right!
    return 0;
}

