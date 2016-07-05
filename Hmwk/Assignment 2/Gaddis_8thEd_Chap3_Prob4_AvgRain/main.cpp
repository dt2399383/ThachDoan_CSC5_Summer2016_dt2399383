/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 03, 2016, 12:50 PM
 * Purpose: Average Rainfall
 */

//System Libraries
#include <iostream> //Input/Output
#include <string>   //Words 
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
    string month1, month2, month3;
    float m1Rain, m2Rain, m3Rain, avgRain;
    
    //Input Data
    cout<<"Calculate Average Rainfall for three months!"<<endl;
    cout<<"Please enter the name of the first month and the "
            <<"amount of rain (inches)"<<endl;
    cin>>month1>>m1Rain;
    cout<<"Please enter the name of the second month and the "
            <<"amount of rain (inches)"<<endl;
    cin>>month2>>m2Rain;
    cout<<"Please enter the name of the third month and the "
            <<"amount of rain (inches)"<<endl;
    cin>>month3>>m3Rain;
    
    //Process the Data
    avgRain =  (m1Rain+m2Rain+m3Rain)/3;
    
    //Output the processed data
    cout<<"The average rainfall for "<<month1<<", "<<month2<<", "<<month3
            <<" is "<<setprecision(3)<<avgRain<<" inches."<<endl;
    
    //Exit Stage Right!
    return 0;
}

