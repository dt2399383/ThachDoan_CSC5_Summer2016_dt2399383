/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 03, 2016, 12:30 AM
 * Purpose: Retroactive pay increase
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
    const float payRaise = .076;
    float userSalary, oldMonthly, retroPay, newSalary, newMonthly, nMonths;
    char choice;
    
    //Input Data
    cout<<"Would you like to calculate your retroactive pay raise?"<<endl;
    cout<<"Enter any key to continue or N to stop"<<endl;
    cin>>choice;
    
         
    //Process the Data and Output
    while (choice !='n' && choice != 'N'){
        cout<<"Please enter your regular annual salary"<<endl;
        cin>>userSalary;
        cout<<"Please enter the number of months that the retroactive pay"
                <<" raise is in effect."<<endl;
        cin>>nMonths;               
        oldMonthly = userSalary/12;
        newMonthly = oldMonthly + oldMonthly*payRaise;
        retroPay = oldMonthly*payRaise;
        newSalary = newMonthly*nMonths+oldMonthly*nMonths;
        cout<<"Amount of retroactive pay due to you is $"<<retroPay
                <<" Per month for six months."<<endl; 
        cout<<"Your new annual salary is $"<<newSalary<<"."<<endl;
        cout<<"Your new monthly pay is $"<<newMonthly<<"."<<endl;
        cout<<"Would you like to calculate your raise again?"<<endl;
        cout<<"Enter any key to continue or N to stop"<<endl;
        cin>>choice;
        
        
    }
    
   
    
    //Exit Stage Right!
    return 0;
}

