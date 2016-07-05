/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 03, 2016, 12:45 PM
 * Purpose: CandyBMR
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
    char gender;//Male-female calculation
    float lbs,inches,yrs;
    float BMR,chocBar=230.0f;
    int nBars;
    
    //Input Data
    cout<<"Calculate how many candy bars you need to eat to maintain"
            <<" your weight."<<endl;
    cout<<"Are you male or female? Enter m for male and f for female:"<<endl;
    cin>>gender;
    cout<<"Input weight(lbs), height(inches), age(yrs)"<<endl;
    cin>>lbs>>inches>>yrs;
    
    //Process the Data
    if(gender=='m'||gender=='M'){
        BMR=66+6.3*lbs+12.9*inches-6.8*yrs;
    }else{
        BMR=655+4.3*lbs+4.7*inches-4.7*yrs;
    }
    nBars=BMR/chocBar+1;
    
    //Output the processed Data
    cout<<"Eat "<<nBars<<" chocolate bars to maintain your weight."<<endl;
    
    //Exit Stage Right!
    return 0;
}

