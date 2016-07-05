/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 03, 2016, 5:00 PM
 * Purpose: Rectangle area comparer
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
    float w1, l1, w2, l2, a1, a2;
    
    //Input Data
    cout<<"Welcome to the Rectangle comparer!"<<endl;
    cout<<"Please enter the length and width of the 1st rectangle"<<endl;
    cin>>l1>>w1;
    cout<<"Please enter the length and width of the 2nd rectangle"<<endl;
    cin>>l2>>w2;
    
    //Process the Data
    a1 = w1*l1;
    a2 = w2*l2;
    
    cout << (a1==a2?"The areas of both rectangles are equal!":(a1>a2)?
        "The first rectangle is greater!":"The second rectangle is greater!");
    //Output the processed data
    
    //Exit Stage Right!
    return 0;
}

