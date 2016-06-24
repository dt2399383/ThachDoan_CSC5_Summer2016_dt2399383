/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on June 23, 2016, 7:30 PM
 * Purpose: Calculate Annual Pay
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
    float payAmount = 2200.00;
    float payPeriods = 26;
    float annualPay;
    
    //Input Data
    
    //Process the Data
    annualPay = payAmount * payPeriods;
    
    
    //Output the processed data
    cout<<"Payment Amount       = $ "<<setw(7)<<payAmount<<endl;
    cout<<"Pay Periods per year =   "<<setw(7)<<payPeriods<<endl;
    cout<<"Annual Pay           = $ "<<setw(7)<<annualPay<<endl;
    
    //Exit Stage Right!
    return 0;
}

