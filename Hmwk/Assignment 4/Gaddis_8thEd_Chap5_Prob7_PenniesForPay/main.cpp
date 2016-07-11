/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 9, 2016, 7:00 AM
 * Purpose: Pennie for pay
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
    int nDays;
    float money = 1.0;
    float total = 0.0;
    float payDay = 0.0;
    
    
    
    //Input Data
    cout<<"Calculate your increasing penny pay!"<<endl;
    cout<<"Enter the number of days you were paid"<<endl;
    cin>>nDays;
    
    while(nDays < 1){
        cout<<"Number of days must be greater than 0."
                <<"Please enter a valid value"<<endl;
        cin>>nDays;
    }
    
           

    //Process the Data and output
    
    cout<<"    Day                      Pay"<<endl;
    cout<<"---------------------------------------"<<endl;
    for (int i = 1; i <= nDays; i++)
    {
        payDay = money/100;
        total += payDay;
        money *=2;
        cout<<"     "<<setw(24)<<left<<i<<left<<setprecision(6)<<"$"
                <<setw(26)<<payDay<<endl;
    }           
    cout<<endl<<endl<<"     Your total earnings are $"<<total<<endl;
    
    
    //Exit Stage Right!
    return 0;
}

