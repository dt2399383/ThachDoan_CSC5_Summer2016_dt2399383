/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 21, 2016, 9:00 AM
 * Purpose: Largest/Smallest array values
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
    int numbers [10];
    int smallest = 0;
    int largest = 0;
    int temp = 0;
    
    
    //Input Data
    
    
    //Process the Data
    for(int i = 0; i < 10; i++){
        cout<<"Please enter number "<<i+1<<": "<<endl;
        cin>>numbers[i];
        
    }
    smallest = numbers[0];
    largest = numbers[0];
    
    for(int i = 1; i <10; i++){
        temp = numbers[i];
        if(temp < smallest){
            smallest = temp;
        }
        if(temp > largest){
            largest = temp;
        }
    }
    //Output the processed data
    cout<<"The largest number is: "<<largest<<endl;
    cout<<"The smallest number is: "<<smallest<<endl;
    
    //Exit Stage Right!
    return 0;
}

