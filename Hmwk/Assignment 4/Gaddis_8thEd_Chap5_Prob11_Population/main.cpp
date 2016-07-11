/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 9, 2016, 7:00 AM
 * Purpose: Population
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
    
    float startPop = 0.0f;
    int nDays = 0;
    float avgIncrease = 0.0f;  
    float dailyPop = 0.0f;
    
    
    
    //Input Data
    cout<<"Calculate populations of organisms!"<<endl;
    cout<<"Please enter the initial population of organisms"<<endl;
    cin>>startPop;
    
    
    
    
    
    
           

    //Process the Data and output
    while(startPop < 2){
        cout<<"Starting population must be at least 2."
                <<"Please enter a valid value"<<endl;
        cin>>startPop;
    }
    
    cout<<"Please enter the number of days that the population will grow"<<endl;
    cin>>nDays;
    
    while (nDays < 1){
        cout<<"The number of days cannot be less than 1. Please enter a "
                <<"valid value"<<endl;
        cin>>nDays;
    }
    cout<<"Please enter the average daily increase in population (%)"<<endl;
    cin>>avgIncrease;
    
    while (avgIncrease < 1){
        cout<<"The number of days cannot be less than 1. Please enter a "
                <<"valid value"<<endl;
        cin>>avgIncrease;
    }
    for (int i = 1; i <=nDays; i++){
        dailyPop = ((avgIncrease/100)*startPop)+ startPop;
        cout<<"Population after day "<<i<<" is "<<dailyPop<<endl;
        
        startPop = dailyPop;
        
    }
    
    
    
    
    
    
    //Exit Stage Right!
    return 0;
}

