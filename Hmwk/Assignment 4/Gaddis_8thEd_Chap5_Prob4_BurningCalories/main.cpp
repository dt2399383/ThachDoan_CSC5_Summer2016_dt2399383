/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 9, 2016, 7:00 AM
 * Purpose: Burning Calories 
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
    float caloriesBurned;
    float caloriesMinute = 3.6f; //Calories burned in a minute
    
    
    //Input Data
    

    //Process the Data and output
    cout<<"A person burns 3.6 calories a minute while running."<<endl;
    cout<<"Minutes                  Calories"<<endl;
    cout<<"---------------------------------"<<endl;
    for (int i = 10; i <= 30; i+=5)
    {
        caloriesBurned = i * caloriesMinute;
        cout<<"  "<<setw(26)<<left<<i<<left<<setprecision(6)<<setw(26)
                <<caloriesBurned<<endl;
    }           
    
    
    
    //Exit Stage Right!
    return 0;
}

