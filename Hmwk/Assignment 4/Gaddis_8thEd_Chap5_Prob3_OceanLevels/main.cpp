/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 9, 2016, 7:00 AM
 * Purpose: Ocean Levels
 */

//System Libraries
#include <iostream> //Input/Output
#include <iomanip>
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
    float level = 0;
    int maxYears = 25;
    
    
    //Input Data
    

    //Process the Data and output
    cout<<"The ocean is rising 1.5 millimeter per year"
            <<" for the next 25 years."<<endl;;
    cout<<"Years                 millimeters"<<endl;
    cout<<"---------------------------------"<<endl;
    for (int i = 1; i <= maxYears; i++)
    {
        level += 1.5;
        cout<<" "<<setw(25)<<left<<i<<left<<setprecision(4)<<setw(26)<<level<<endl;
    }           
    
    
    
    //Exit Stage Right!
    return 0;
}

