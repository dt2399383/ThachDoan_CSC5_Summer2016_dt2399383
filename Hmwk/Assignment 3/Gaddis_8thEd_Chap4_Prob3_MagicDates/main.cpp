/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 03, 2016, 5:00 PM
 * Purpose: magic date
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
    int month, day, year;
    
    
    //Input Data
    cout<<"Please enter a month (in numeric form), a day, and a"
            <<" two-digit year."<<endl;
    cin>>month>>day>>year;
    
    //Process the Data
    cout << (month*day==year?"That date is Magic!":"That date is"
            " not magic");
    //Output the processed data
    
    //Exit Stage Right!
    return 0;
}

