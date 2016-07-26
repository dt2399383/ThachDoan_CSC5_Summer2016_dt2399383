/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 21, 2016, 9:00 AM
 * Purpose: Celsius
 */

//System Libraries
#include <iostream> //Input/Output
#include <cmath>    //Math
#include <iomanip>
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float celsius(float f);

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float c = 0.0f;
    
    cout<<"I will now display Celsius temperatures for 0 to 20 F"<<endl;
    
    
    //Input Data
    
    //Process the Data
    for(int i = 0; i < 21; i++){
        c = celsius(i);
        cout<<i<<" degree of fahrenheit equals to "<<setprecision(2)<<fixed
                <<c<<" degress celsius"<<endl;
    }
    //Output the processed data
    
    //Exit Stage Right!
    return 0;
}

float celsius(float f){
    float c = 0.0f;
    c = (5.0/9)*(f-32);
    return c;
    
    
}