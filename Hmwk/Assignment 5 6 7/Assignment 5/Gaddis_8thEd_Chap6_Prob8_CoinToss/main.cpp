/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 21, 2016, 9:00 AM
 * Purpose: Markup Cost
 */

//System Libraries
#include <iostream> //Input/Output
#include <cstdlib>
#include <ctime>
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
int coinToss (void){
    int randNum;
    randNum = 1 + rand()%2;
    return randNum;
    
}

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    srand((time(0)));
    
    //Declare Variables
    int times =0;
    int randNum = 0;
    string hedTail = "";
    
    //Input Data
    cout<<"How many times do you want to toss the coin?"<<endl;
    cin>>times;
    
    
    
    //Process the Data
    for(int i =1; i <=times; i++){
        randNum = coinToss();
        if (randNum ==1){
            hedTail = "Heads";
        }else{
            hedTail= "Tails";
        }
        cout<<hedTail<<endl;
    }
    //Output the processed data
    
    
    //Exit Stage Right!
    return 0;
}

float calculateRetail(float cost, float percent){
    float tCost = 0;
    tCost = ((cost/100)*percent)+cost;
    return tCost;
}