/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 03, 2016, 12:50 PM
 * Purpose: Test Average
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
    float test1,test2,test3,test4,test5;
    float testAvg;
    
    //Input Data
    cout<<"Calculate your test average!"<<endl;
    cout<<"Please enter 5 test scores:"<<endl;
    cin>>test1>>test2>>test3>>test4>>test5;
    
    //Process the Data
    testAvg = (test1+test2+test3+test4+test5)/5;
    
    
    //Output the processed data
    cout<<"Your average test score is "<<testAvg<<"."<<endl;
    
    //Exit Stage Right!
    return 0;
}

