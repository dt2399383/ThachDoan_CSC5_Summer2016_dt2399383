/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 21, 2016, 9:00 AM
 * Purpose: Falling Distance
 */

//System Libraries
#include <iostream> //Input/Output
#include <cmath>    //Math
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float fallDist(int t = 0);

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    int t = 0;
    float d = 0;
    
    //Input Data
    cout<<"Calculate the distance an object falls in 10 seconds"<<endl;
    
    //Process the Data
    for(int i = 1; i <= 10; i++){
        d = fallDist(i);
        cout<<i<<" seconds: "<<d<<" meters"<<endl;
    }
    //Output the processed data
    
    //Exit Stage Right!
    return 0;
}

float fallDist(int t){
    float d = 0;
    const float g = 9.8;
    d = (0.5 * g) *(pow(t,2));
    return d;
}