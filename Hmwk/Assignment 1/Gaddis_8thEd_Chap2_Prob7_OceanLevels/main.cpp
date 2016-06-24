/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on June 23, 2016, 7:45 PM
 * Purpose: Calculate Ocean Levels by year
 */

//System Libraries
#include <iostream> //Input/Output
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants
float oceanRate = 1.5;
//Function Prototypes

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float fifthYear, seventhYear, tenthYear;
    
    //Input Data
    
    //Process the Data
    fifthYear = oceanRate * 5;
    seventhYear = oceanRate * 7;
    tenthYear = oceanRate * 10;
    
    
    //Output the processed data
    cout<<"In 5 years, the oceans have risen "<<fifthYear<<" mm."<<endl;
    cout<<"In 7 years, the oceans have risen "<<seventhYear<<" mm."<<endl;
    cout<<"In 10 years, the oceans have risen "<<tenthYear<<" mm."<<endl;
    
    //Exit Stage Right!
    return 0;
}

