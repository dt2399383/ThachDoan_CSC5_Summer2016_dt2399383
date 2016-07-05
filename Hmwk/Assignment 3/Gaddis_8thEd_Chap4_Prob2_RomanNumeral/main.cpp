/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 03, 2016, 5:00 PM
 * Purpose: Roman numeral converter
 *
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
    float input;
    
    //Input Data
    cout<<"Please enter a number between 1 and 10"
    cin>>input;
    
    //Process the Data
    switch (input) {
      case 1:            // Note the colon, not a semicolon
          cout<<"I"<<endl;
        break;
      case 2:            // Note the colon, not a semicolon
        cout<<"II"<<endl;
        break;
      case 3:            // Note the colon, not a semicolon
        cout<<"III"<<endl;
        break;
      case 4:            // Note the colon, not a semicolon
        cout<<"IV"<<endl;
        break;
      case 5:            // Note the colon, not a semicolon
          cout<<"V"<<endl;
        break;
      case 6:            // Note the colon, not a semicolon
        cout<<"VI"<<endl;
        break;
      case 7:            // Note the colon, not a semicolon
        cout<<"VII"<<endl;
        break;
      case 8:            // Note the colon, not a semicolon
        cout<<"VIII"<<endl;
        break;
      case 9:            // Note the colon, not a semicolon
          cout<<"IX"<<endl;
        break;
      case 10:            // Note the colon, not a semicolon
        cout<<"X"<<endl;
        break;
      default:            // Note the colon, not a semicolon
        cout<<"Error, bad input, quitting\n";
    break;
    //Output the processed data
    
    //Exit Stage Right!
    return 0;
}

