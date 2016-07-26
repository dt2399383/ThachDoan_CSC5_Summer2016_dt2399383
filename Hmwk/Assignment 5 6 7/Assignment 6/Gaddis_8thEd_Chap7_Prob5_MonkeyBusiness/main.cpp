/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 21, 2016, 9:00 AM
 * Purpose: Monkey Business
 */

//System Libraries
#include <iostream> //Input/Output
#include <iomanip>  //Formatting
#include <string>   //String
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
    float totalAverage =0;
    int monkey = 0, day = 0;
    int entered_value;


    const int NUM_MONKEYS = 3;
    const int NUM_DAYS = 7; 
    float average [NUM_MONKEYS][NUM_DAYS];
    float highest = 0, lowest;
    float monkeys[NUM_MONKEYS];
    
   
    //Input Data
    cout << "Enter the amount of food in pounds eaten by the referred monkey.\n";

    for (monkey = 0; monkey < NUM_MONKEYS; monkey++){
        for (day = 0; day < NUM_DAYS; day++){
            cout << "Monkey " << (monkey + 1) << ", "
            << "Day " << (day + 1) << ": ";
            cin >> average [monkey][day];
            while ((average [monkey][day] < 0)){
                // Ensure that negative numbers are not accepted.
                entered_value = -1;
                while (entered_value < 0){
                    cout << "Please enter positive values.\n";
                    cin >> entered_value;
                    if (entered_value > -1){
                        average [monkey][day] = entered_value; 
                    }
                    else
                    {
                        cout << "Negative values are not accepted.\n";
                    }
                }
            }
        }
        cout << endl;
    }

    for (monkey = 0; monkey < NUM_MONKEYS; monkey++){
        // Get the total amount of food eaten during the week
        for (day =0; day< NUM_DAYS; day++){
            // Store the total amount eaten by each monkey
            monkeys[monkey] += average [monkey][day];
        }
    }

    // Compute the average amount eaten by all monkeys each day.
    totalAverage = monkeys[0] + monkeys[1] + monkeys[2];
    totalAverage =  totalAverage / NUM_DAYS;

    // Compare the amounts eaten by each monkey to determine which one ate the most.
    for (monkey = 0; monkey < NUM_MONKEYS - 1; monkey++){
        if (monkeys[monkey] > monkeys[monkey + 1]){
            if (monkeys[monkey] > highest){
                highest = monkeys[monkey];
            }
        }
        else
        {
            highest = monkeys[monkey + 1];
        }
    }

    if (monkeys[0] < monkeys[1] && monkeys[0] < monkeys[2])
    {
        lowest = monkeys[0];
    }
    else if (monkeys[1] < monkeys[2]) 
    {
        lowest = monkeys[1];
    }
    else
    {
        lowest = monkeys[2];
    }
    
    //Output the processed data
    cout << fixed << showpoint << setprecision (2); // DOUBLE
    cout << "The average amount is: " << totalAverage << endl;
    cout << "The highest amount is: " << highest << endl;
    cout << "The lowest amount is: " << lowest << endl; 
    
    //Exit Stage Right!
    return 0;
}

