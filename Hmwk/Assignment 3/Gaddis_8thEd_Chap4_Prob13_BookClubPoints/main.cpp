/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 03, 2016, 5:00 PM
 * Purpose: Software discount calculator
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
    float purchases;
    
    //Input Data
    cout<<"Welcome to the Book Club Point Calculator!"<<endl;
    cout<<"Please enter the amount of books you have purchased this month!"
            <<endl;
    cin>>purchases;
    
    //Process the Data
     
    
    if(purchases<0){
        cout<<"You've earned 0 points!"<<endl;
    }else if (purchases==1){
        cout<<"You've earned 5 points!"<<endl;
    }else if (purchases==2){
        cout<<"You've earned 15 points!"<<endl;
    }else if (purchases==3){
        cout<<"You've earned 30 points!"<<endl;
    }else if (purchases>=4){
        cout<<"You've earned 60 points!"<<endl;
    }else

    //Output the processed data
    
    //Exit Stage Right!
    return 0;
}

