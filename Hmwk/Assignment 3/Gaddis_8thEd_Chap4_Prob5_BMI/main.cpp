/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 03, 2016, 5:00 PM
 * Purpose: BMI calculator
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
    float bmi, weight, height;
    
    //Input Data
    cout<<"Please enter your weight in pounds and height in inches"<<endl;
    cin>>weight>>height;
    
    //Process the Data
    bmi = weight * 703 / (height * height);
    
    if(bmi<18.5){
        cout<<"You are underweight"<<endl;
    }else if (bmi<=25){
        cout<<"Your weight is optimal"<<endl;
    }else{
        cout<<"You are overweight"<<endl;
    }
    //Output the processed data
    
    //Exit Stage Right!
    return 0;
}

