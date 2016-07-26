/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 21, 2016, 9:00 AM
 * Purpose: Winning Division
 */

//System Libraries
#include <iostream> //Input/Output
#include <string>   //String
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float getSale(string);
void finHigh(float, float, float, float);

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float NESales, SESales, NWSales, SWSales;
    
    //Input Data
    
    
    //Process the Data
    for (int i = 0; i < 4; i++){
        switch(i){
            case 0:
                NESales = getSale("NE");
                break;
            case 1:
                SESales = getSale("SE");
                break;
            case 2:
                NWSales = getSale("NW");
                break;
            default:
                SWSales = getSale("SW");
                break;
        }
        finHigh(NESales, SESales, NWSales, SWSales);
    }
    //Output the processed data
    
    
    //Exit Stage Right!
    
}

float getSale(string name){
    float sales = 0;
    cout<<"Please enter the sales for division "<<name<<" $";
    cin>>sales;
    while(sales < 0){
        cout<<"Sales cannot be negative. Please re-enter a value: $";
        cin>>sales;
    }
    return sales;
}
void finHigh(float NESales, float SESales, float NWSales, float SWSales){
    float highest = 0;
    string division = "";
    if(NESales > SESales && NESales > NWSales && SESales > SWSales){
        highest = NESales;
        division = "North East";
    }
    else if(SESales > NESales && SESales > NWSales && SESales > SWSales){
        highest = SESales;
        division = "South East";
    }
    else if(NWSales > NESales && NWSales > SESales && NWSales > SWSales){
        highest = NWSales;
        division = "North West";
    }else{
        highest = SWSales;
        division = "South West";
    }
    cout<<"The division with the highest sales is "<<division<<" with total"
            <<" sales of $"<<highest;
}