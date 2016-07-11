/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 9, 2016, 7:00 AM
 * Purpose: HotelOccupancy
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
    int nFloorRooms = 0;
    int totalRooms = 0;
    int totalFloors = 0;
    int occupiedFloorRooms = 0;
    int totalOccupiedRooms = 0;
    float percentOccupied = 0.0f;
    
    
    
    
    //Input Data
    cout<<"Calculate your hotel occupancy!"<<endl;
    cout<<"Enter the number of floors of your hotel"<<endl;
    cin>>totalFloors;
    
    while(totalFloors < 1){
        cout<<"Number of floors must be greater than 0."
                <<"Please enter a valid value"<<endl;
        cin>>totalFloors;
    }
    
           

    //Process the Data and output
    for (int i = 1; i <= totalFloors; i++)
    {
        if (i !=13){
            cout<<"Enter the number of rooms on floor number "<<i<<endl;
            cin>>nFloorRooms;
            
            while (nFloorRooms < 10 || nFloorRooms < 0){
                
                cout<<"Number of rooms on floor must be at least 10."
                        <<"Please enter a valid value."<<endl;
                cin>>nFloorRooms;
            }
            cout<<"How many rooms are occupied?"<<endl;
            cin>>occupiedFloorRooms;
        }
        
        
        
        totalRooms += nFloorRooms;
        totalOccupiedRooms += occupiedFloorRooms;
        
        
    }
    
    percentOccupied =(totalOccupiedRooms * 1.0f / totalRooms) * 100;
    
    cout<<"The hotel has a total of "<<totalFloors<<" floors"<<endl;
    cout<<"The hotel has a total of "<<totalRooms<<" rooms"<<endl;
    cout<<"There are "<<totalOccupiedRooms<<" rooms occupied"<<endl;
    cout<<"There are "<<totalRooms - totalOccupiedRooms<<" Vacancies"<<endl;
    cout<<"Percent of occupied rooms is "<<setprecision(2)<<fixed
            <<percentOccupied<<"%"<<endl;
    
    //Exit Stage Right!
    return 0;
}

