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
void selectionSort(int arr[NUM_ELEMENTS]);
bool binarySearch(int, int arr[NUM_ELEMENTS]);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    //unsorted array
    int accountArray[] = { 2, 10, 12, 8, 7, 11, 13, 16, 1, 17, 3, 15, 9, 5, 6, 18, 4, 14 };
    //1 2 3 4 5 6 7 8 9 10
    int accNumber = 0;
    bool found = true;
    
    //Input Data
    cout << "Please enter your account number: ";
    cin >> accNumber;
    
    //Output the processed Data
    selectionSort(accountArray);
    if (found == binarySearch(accNumber, accountArray)){
            cout << "\nAccount " << accNumber << " is a valid account.\n";
    }else{
            cout << "\nAccount " << accNumber << " is NOT a valid account.\n";
    }

    
    //Exit Stage Right!
    return 0;
}

void selectionSort(int arr[NUM_ELEMENTS])
{
	int minIndex = 0;

	for (int i = 0; i < NUM_ELEMENTS - 1; i++)
	{
		int minIndex = i;
		int minValue = arr[i];
		for (int c = i + 1; c < NUM_ELEMENTS; c++)
		{
			if (arr[c] < minValue)
			{
				minValue = arr[c];
				minIndex = c;
			}
		}

		//swap the values
		int temp = arr[i];
		arr[i] = minValue;
		arr[minIndex] = temp;
	}
}