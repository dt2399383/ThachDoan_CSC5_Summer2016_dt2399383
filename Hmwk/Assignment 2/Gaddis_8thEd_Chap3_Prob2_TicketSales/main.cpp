/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 03, 2016, 12:50 PM
 * Purpose: Calculate ticket sales
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
    int classA = 15;
    int classB = 12;
    int classC = 9;
    float nClassA, nClassB, nClassC, income;
    
    //Input Data
    cout<<"Calculate the income from your ticket sales!"<<endl;
    cout<<"Please enter the number of Class A tickets you've sold: "<<endl;
    cin>>nClassA;
    cout<<"Please enter the number of Class B tickets you've sold: "<<endl;
    cin>>nClassB;
    cout<<"Please enter the number of Class C tickets you've sold: "<<endl;
    cin>>nClassC;
    
    
    
    //Process the Data
    income = nClassA*classA+nClassB*classB+nClassC*classC;
    
    //Output the processed data
    cout<<"You've earned $"<<income<<" from ticket sales!"<<endl;
    
    //Exit Stage Right!
    return 0;
}

