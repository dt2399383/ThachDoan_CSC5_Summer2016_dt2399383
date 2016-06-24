/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on June 23, 2016, 7:05 PM
 * Purpose: East Coast Division Profit
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
    float ECCompSalesPer = .58;//East Coast Profits Percentage
    float TotalCompSales = 8600000;//Total Sales for the company
    float ECSales;//East Coast Total Sales
    
    //Input Data
    
    //Process the Data
    ECSales = ECCompSalesPer * TotalCompSales;
    
    //Output the processed data
    cout<<"Total company sales = $ "<<TotalCompSales<<endl;
    cout<<"Sales from only the East Coast Division = $ "<<ECSales<<endl;
    //Exit Stage Right!
    return 0;
}

