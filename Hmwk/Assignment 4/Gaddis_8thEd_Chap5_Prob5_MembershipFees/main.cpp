/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 9, 2016, 7:00 AM
 * Purpose: Membership Fees
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
    const float rate = 0.04; //fee increase rate
    const int years = 6;     //# of years of increase
    float mFee = 2500;       //initial fee cost
    
    
    
    //Input Data
    

    //Process the Data and output
    cout<<"New membership fees for the next 6 years are:"<<endl;
    cout<<"    Year                      Fee"<<endl;
    cout<<"---------------------------------------"<<endl;
    for (int i = 1; i <= years; i++)
    {
        mFee = mFee + (mFee * rate);
        cout<<"      "<<setw(24)<<left<<i<<left<<setprecision(6)<<setw(26)
                <<mFee<<endl;
    }           
    
    
    
    //Exit Stage Right!
    return 0;
}

