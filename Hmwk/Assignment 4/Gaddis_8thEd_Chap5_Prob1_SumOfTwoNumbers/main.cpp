/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 9, 2016, 7:00 AM
 * Purpose: Sum of two numbers
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
    int sum = 0;
    int num;
    //Input Data
    cout << "Enter a number greater than 0.\n";
    cin >> num;
    //Process the Data and output
    for (int counter = 0; counter <= num; counter++){		
	sum = sum + counter;
	
        
	}if (num < 1){
	cout << "\n" << num << " is an invalid input.";
	cout << " The program will now terminate.\n";
	}else
        cout << "\nThe sum of numbers 1 --> " << num
			 << " " << "is " << sum << endl;            
    
    
    
    //Exit Stage Right!
    return 0;
}

