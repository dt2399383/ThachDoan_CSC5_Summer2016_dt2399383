/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on June 23, 2016, 7:20 PM
 * Purpose: Calculate Meal Cost
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
    float MealCharge = 88.67;
    float Tax = .0675;
    float TipRatio = .2 ;
    float TaxAmount, TipAmount, Total;
    
    //Input Data
    
    //Process the Data
    TaxAmount = MealCharge * Tax;
    TipAmount = (MealCharge + TaxAmount) * TipRatio;
    Total = MealCharge + TaxAmount + TipAmount;
    
    //Output the processed data
    cout<<"Meal Price = $ "<<MealCharge<<endl;
    cout<<"Tax        = $ "<<setprecision(3)<<TaxAmount<<endl;
    cout<<"Tip        = $ "<<setprecision(4)<<TipAmount<<endl;
    cout<<"Total      = $ "<<setprecision(5)<<Total<<endl;
    
    //Exit Stage Right!
    return 0;
}

