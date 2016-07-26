/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 21, 2016, 9:00 AM
 * Purpose: Markup Cost
 */

//System Libraries
#include <iostream> //Input/Output
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float calculateRetail(float, float);

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float wCost = 0;
    float percent = 0;
    float tPrice = 0;
    
    //Input Data
    cout<<"Please enter a non-negative number for the wholesale price and"
            <<" the percentage."<<endl;
    cin>>wCost>>percent;
    
    //Process the Data
    while(wCost <0 || percent <0){
        cout<<"Please enter a non-negative number for the wholesale price and"
            <<" the percentage."<<endl;
        cin>>wCost>>percent;
    }
    //Output the processed data
    tPrice = calculateRetail(wCost, percent);
    cout<<"The total cost is : $"<<tPrice;
    
    //Exit Stage Right!
    return 0;
}

float calculateRetail(float cost, float percent){
    float tCost = 0;
    tCost = ((cost/100)*percent)+cost;
    return tCost;
}