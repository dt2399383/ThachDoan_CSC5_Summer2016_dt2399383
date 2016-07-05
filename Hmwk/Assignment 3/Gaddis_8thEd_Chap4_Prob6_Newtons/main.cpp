/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 03, 2016, 5:00 PM
 * Purpose: Newton Calculator
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
    float mass, weight;
    
    //Input Data
    cout<<"Welcome to the Newton Calculator!"<<endl;
    cout<<"Please enter the mass of the object in kilograms"<<endl;
    cin>>mass;
    
    //Process the Data
    weight = mass * 9.8; //formula for finding newtons 
    
    if(weight<10){
        cout<<"The object is too light."<<endl;
    }else if (weight>1000){
        cout<<"The object is too heavy."<<endl;
    }else{
        cout<<"The object weighs "<<weight<<" newtons."<<endl;
    }
    //Output the processed data
    
    //Exit Stage Right!
    return 0;
}

