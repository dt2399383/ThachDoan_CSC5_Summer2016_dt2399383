/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 21, 2016, 9:00 AM
 * Purpose: Safest Driving Area
 */

//System Libraries
#include <iostream> //Input/Output
#include <string>   //String
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
int getAcc(string);
void findLow(int, int, int, int, int);


//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    int accN, accS, accE, accW, accC;
    
    //Input Data
    
    
    //Process the Data
    for (int i = 0; i <5; i++){
        switch(i){
            case 0:
                accN = getAcc("North");
                break;
            case 1:
                accS = getAcc("South");
                break;
            case 2:
                accE = getAcc("East");
                break;
            case 3:
                accW = getAcc("West");
                break;
            default:
                accC = getAcc("Central");
        }
        
    }
    findLow(accN, accS, accE, accW, accC);
    
    //Output the processed data
    
    //Exit Stage Right!
    return 0;
}

int getAcc(string region){
    int accident = 0;
    cout<<"Please enter number of accidents for region "<<region<<" ";
    cin>>accident;
    
    while(accident < 0){
        cout<<"Number of accidents must be a positive number. Please re-enter: ";
        cin>>accident;
        
    }
    return accident;
}
void findLow (int r1, int r2, int r3, int r4, int r5){
    int lowest = 0;
    string region = "";
    
    if(r1 < r2 && r1 < r3 && r1 < r4 && r1 < r5){
        lowest = r1;
        region = "North";
    }
    else if(r2 < r1 && r2 < r3 && r2 < r4 && r2 < r5){
        lowest = r2;
        region = "South";
    }
    else if(r3 < r1 && r3 < r2 && r3 < r4 && r3 < r5){
        lowest = r3;
        region = "East";
    }
    else if(r4 < r1 && r4 < r2 && r4 < r3 && r4 < r5){
        lowest = r4;
        region = "West";
    }
    else
    {
        lowest = r5;
        region = "Central";
        
    }
    cout<<"The region with the lowest number of accidents is "<<region<<"."
            <<"The total number of accidents in that region is "<<lowest;
    
}