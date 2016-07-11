/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 9, 2016, 7:00 AM
 * Purpose: ASCII
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
    char letter=0;
    //Input Data
    cout <<"Here are the ASCII codes 0 through 127!"<<endl;

    //Process the Data and output
    for(int count = 0; count <= 127; count++){
	if (count % 16 ==0)
           	cout << endl; 
		cout << letter << "  ";
		letter++;
		
	}           
    
    
    
    //Exit Stage Right!
    return 0;
}

