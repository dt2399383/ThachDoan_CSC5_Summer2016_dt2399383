/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on June 23, 2016, 7:15 PM
 * Purpose: Purchase Plus Tax
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
    float Item = 95;//Price
    float StateTax = .04;//State Tax
    float CountyTax = .02;//County Tax
    float ItemStateTax, ItemCountyTax, TotalPurchase;
   
    //Input Data
    
    //Process the Data
    ItemStateTax = Item * StateTax;
    ItemCountyTax = Item * CountyTax;
    TotalPurchase = Item + ItemStateTax + ItemCountyTax;
    
    //Output the processed data
    cout<<"Item       = $ "<<Item<<endl;
    cout<<"State Tax  = $ "<<ItemStateTax<<endl;
    cout<<"County Tax = $ "<<ItemCountyTax<<endl;
    cout<<"Total      = $ "<<TotalPurchase<<endl;
    
    //Exit Stage Right!
    return 0;
}

