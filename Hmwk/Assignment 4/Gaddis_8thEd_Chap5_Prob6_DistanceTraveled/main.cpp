/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 9, 2016, 7:00 AM
 * Purpose: Distance Traveled
 */

//System Libraries
#include <iostream> //Input/Output
#include <iomanip>
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
    int speed;      //Variables are self-explanatory
    float time;
    float distance;   
    
    
    //Input Data
    cout<<"What is the speed of the vehicle(MPH)?"<<endl;
    cin>>speed;
    
    while(speed <= 0){
        cout<<"Speed must be greater than 0. Please enter a valid value"<<endl;
        cin>>speed;
    }
    cout<<"How many hours did it travel?"<<endl;
    cin>>time;
    
    while (time <1){
        cout<<"Time must be greater than 0. Please enter a valid value"<<endl;
        cin>>time;
    }
           

    //Process the Data and output
    
    cout<<"    Year                      Fee"<<endl;
    cout<<"---------------------------------------"<<endl;
    for (int i = 1; i <= time; i++)
    {
        distance = speed *i;
        cout<<"      "<<setw(24)<<left<<i<<left<<setprecision(6)<<setw(26)
                <<distance<<endl;
    }           
    
    
    
    //Exit Stage Right!
    return 0;
}

