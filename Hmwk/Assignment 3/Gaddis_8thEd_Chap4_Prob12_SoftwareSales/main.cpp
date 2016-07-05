/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 03, 2016, 5:00 PM
 * Purpose: Software discount calculator
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
    float sales, cost;
    
    //Input Data
    cout<<"Welcome to the Software Discount Calculator!"<<endl;
    cout<<"Please enter the amount of software you wish to purchase!"<<endl;
    cin>>sales;
    
    //Process the Data
    cost = sales*99; 
    
    if(sales<10){
        cout<<"Your total cost is $"<<cost<<endl;
    }else if (sales<=19){
        cout<<"Your total cost is $"<<cost - (cost*.2)<<endl;
    }else if (sales<=49){
        cout<<"Your total cost is $"<<cost - (cost*.3)<<endl;
    }else if (sales<=99){
        cout<<"Your total cost is $"<<cost - (cost*.4)<<endl;
    }else if (sales>100){
        cout<<"Your total cost is $"<<cost - (cost*.5)<<endl;
    }else

    //Output the processed data
    
    //Exit Stage Right!
    return 0;
}

