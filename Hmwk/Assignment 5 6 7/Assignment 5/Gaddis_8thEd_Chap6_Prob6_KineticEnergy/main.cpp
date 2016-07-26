/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 21, 2016, 9:00 AM
 * Purpose: Kinetic Energy
 */

//System Libraries
#include <iostream> //Input/Output
#include <cmath>    //Math
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float kE(int m, int v);

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float ke = 0;
    int m = 0;
    int v = 0;
    
    
    //Input Data
    cout<<"Please enter mass in kg: "<<endl;
    cin>>m;
    cout<<"Please enter velocity in meters per second"<<endl;
    cin>>v;
    
    ke = kE(m,v);
    cout<<endl<<"The kinetic energy of this object is "<<ke<<endl;
    //Process the Data
   
    //Output the processed data
    
    //Exit Stage Right!
    return 0;
}

float kE(int m, int v){
    return (0.5*m)*(pow(v,2));
    
}