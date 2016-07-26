/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 21, 2016, 9:00 AM
 * Purpose: Rainfall Stats
 */

//System Libraries
#include <iostream> //Input/Output
#include <iomanip>  //Formatting
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
    float rainfall[12];
    float total = 0;
    float avg = 0;
    float maxRain = 0;
    float minRain = 0;
    float temRain = 0;
    
    
    
    //Input Data
    
    
    //Process the Data
    for(int i = 0; i < 12; i++){
        cout<<"Please enter rainfall for month "<<i+1<<": "<<endl;
        cin>>rainfall[i];
        total +=rainfall[i];
        
    }
    avg = total/12;
    maxRain = rainfall[0];
    minRain = rainfall[0];
    
    for (int i = 1; i <= 12; i++){
        temRain = rainfall[i];
        if(temRain < minRain){
            minRain = temRain;
        }
        if(temRain > maxRain){
            maxRain = temRain;
        }
    }
    //Output the processed data
    cout<<"The total rainfall was: "<<setprecision(2)<<fixed<<showpoint<<total<<endl;
    cout<<"The average rainfall was: "<<setprecision(2)<<fixed<<showpoint<<avg<<endl;
    cout<<"The highest rainfall was: "<<setprecision(2)<<fixed<<showpoint<<maxRain<<endl;
    cout<<"The lowest rainfall was: "<<setprecision(2)<<fixed<<showpoint<<minRain<<endl;
    
    //Exit Stage Right!
    return 0;
}

