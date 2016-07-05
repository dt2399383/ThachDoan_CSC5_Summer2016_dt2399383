/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 03, 2016, 12:00 AM
 * Purpose: Cereal conversion from ounces to metric tons
 */

//System Libraries
#include <iostream> //Input/Output
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants
const float mTonOunces = 35273.92;

//Function Prototypes

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    float userOunces, userTons, userBoxes;
    
    //Input Data
    cout<<"Would you like to calculate your cereal weight in metric tons?"
            <<endl;
    cout<<"Enter any key to continue or N to stop"<<endl;
    cin>>choice;
    
    
    //Process the Data and Output
    while (choice !='n'&&choice !='N' ){
        cout<<"Enter the number of ounces that are in your box of cereal"<<endl;
        cin>>userOunces;
            userTons = userOunces/mTonOunces;
            userBoxes = mTonOunces/userTons;
        cout<<"Your box of cereal is equal to "<<userTons<<" metric tons."<<endl;
        cout<<"You would need "<<userBoxes<<" boxes of your cereal to equal a "
                "metric ton."<<endl;
        cout<<"Would you like to calculate again? "<<endl;
        cout<<"Enter any key to continue or N to stop"<<endl;
        cin>>choice;
    
    }
    
    
   
    
    //Exit Stage Right!
    return 0;
}

