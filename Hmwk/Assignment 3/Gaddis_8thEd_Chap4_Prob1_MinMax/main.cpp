/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 03, 2016, 5:00 PM
 * Purpose: minimum and maximum number
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
    float num1, num2;
    
    //Input Data
    cout<<"Please enter 2 numbers"<<endl;
    cin>>num1>>num2;
    
    //Process the Data
    cout << (num1==num2?"equal":(num1>num2)?
        "first number is greater":"second number is greater");
    //Output the processed data
    
    //Exit Stage Right!
    return 0;
}

