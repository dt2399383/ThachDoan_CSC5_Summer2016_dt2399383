/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 9, 2016, 7:00 AM
 * Purpose: average rainfall
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
    int nYears;
    const int Month = 12;
    float rainfall = 0.0f;
    float avgRainfall = 0.0f;  
    float totalRainfall = 0.0f;
    
    
    
    //Input Data
    cout<<"Calculate average rainfall"<<endl;
    cout<<"Please enter the number of years"<<endl;
    cin>>nYears;
    
    
    
    
    
    
           

    //Process the Data and output
    while(nYears < 1){
        cout<<"Number of years must be at least 1. Please enter a valid value"<<endl;
        cin>>nYears;
    }
    for (int i = 1; i <=nYears; i++){
        for (int months = 1; months <= Month; months++){
            cout<<"Please enter the rainfall for "<<" month "<<months<<": "
                    <<endl;
            cin>>rainfall;
            
            while (rainfall < 0){
                cout<<"Rainfall cannot be negative. Please enter a "
                        <<"valid value."<<endl;
                cin>>rainfall;
                
            }
            totalRainfall +=rainfall;
        }
    }
    cout<<"Number of months: "<<nYears*Month<<endl;
    cout<<"Total rainfall: "<<setprecision(2)<<fixed<<totalRainfall<<" inches"
            <<endl;
    cout<<"Average rainfall: "<<setprecision(2)<<fixed
            <<totalRainfall/(nYears*Month)<<" inches"<<endl;
    
    
    
    
    
    //Exit Stage Right!
    return 0;
}

