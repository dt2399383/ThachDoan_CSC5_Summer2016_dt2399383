/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 23, 2016, 9:00 pM
 * Purpose: account validation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Number
#include <ctime>     //Time
#include <fstream>   //File Streams
#include <iomanip>   //Formatting
using namespace std; //Name-space of the System Libraries

//User Libraries

//Global Constants
const int NUM_ELEMENTS = 18;

//Function Prototypes
bool searchArray(int, int[NUM_ELEMENTS]);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int account[] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
		      8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
	              1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };

    int accNumber = 0;
    bool found = true;
    
    //Input Data
    cout << "Please enter your account number: ";
    cin >> accNumber;
    
    //Output the processed Data
    if (found == searchArray(accNumber, account)){
            cout << "\nAccount " << accNumber << " is a valid account" << endl;
    }else{
            cout << "\nAccount " << accNumber << " is NOT a valid account" << endl;
    }
    
    //Exit Stage Right!
    return 0;
}

bool searchArray(int enteredValue, int lookUpArray[NUM_ELEMENTS] )
{
	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		if (enteredValue == lookUpArray[i])
			return true;
	}

	return false;
}

