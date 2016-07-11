/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 10, 2016, 9:00 PM
 * Purpose: ALL Programs within a menu
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
    int input;
    bool menu = true;
    
    //Input Data
    do{
        cout<<"Please enter a number between 1 and 10 for the Programs listed:"
            <<endl<<"1  for Summation of consecutive numbers"
            <<endl<<"2  for Average Rainfall"
            <<endl<<"3  for Calculating populations "
            <<endl<<"4  for ASCII Output"
            <<endl<<"5  for Calculating Ocean Levels "
            <<endl<<"6  for Calculating Calories burned on a treadmill"
            <<endl<<"7  for Calculating membership fee increases"
            <<endl<<"8  for Calculating Distance traveled by a vehicle"
            <<endl<<"9  for Calculating Increasing Penny pay"
            <<endl<<"10 for Calculating Hotel Occupancy"
            <<endl<<"11 To EXIT!"<<endl;
    cin>>input;
    //Process the Data
        switch (input){
          case 1:
            cout << "You have chosen Summation of consecutive numbers"<<endl; 
                {
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

            break;
         case 2:
            cout << "You have chosen Average Rainfall"<<endl;
                {
                //Declare Variables
                int nYears;
                const int Month = 12;
                float rainfall = 0.0f;
                float avgRainfall = 0.0f;  
                float totalRainfall = 0.0f;
                //Input Data
                cout<<"Calculate average rainfall"<<endl;
                cout<<"Please enter the number of years"<<endl;
                cin>>nYears;
                //Process the Data and output
                while(nYears < 1){
                    cout<<"Number of years must be at least 1."
                            << "Please enter a valid value"<<endl;
                    cin>>nYears;
                }
                for (int i = 1; i <=nYears; i++){
                    for (int months = 1; months <= Month; months++){
                        cout<<"Please enter the rainfall for "<<" month "
                                <<months<<": "<<endl;
                        cin>>rainfall;

                        while (rainfall < 0){
                            cout<<"Rainfall cannot be negative. Please enter a "
                                    <<"valid value."<<endl;
                            cin>>rainfall;
                        }
                        totalRainfall +=rainfall;
                    }
                }
                cout<<"Number of months: "<<nYears*Month<<endl;
                cout<<"Total rainfall: "<<setprecision(2)<<fixed<<totalRainfall
                        <<" inches"
                        <<endl;
                cout<<"Average rainfall: "<<setprecision(2)<<fixed
                        <<totalRainfall/(nYears*Month)<<" inches"<<endl;
                //Exit Stage Right!
                return 0;
            }

            break; 
         case 3:
            cout << "You have chosen Calculating populations"<<endl;{
                //Declare Variables
                float startPop = 0.0f;
                int nDays = 0;
                float avgIncrease = 0.0f;  
                float dailyPop = 0.0f;
                //Input Data
                cout<<"Calculate populations of organisms!"<<endl;
                cout<<"Please enter the initial population of organisms"<<endl;
                cin>>startPop;
                //Process the Data and output
                while(startPop < 2){
                    cout<<"Starting population must be at least 2."
                            <<"Please enter a valid value"<<endl;
                    cin>>startPop;
                }
                cout<<"Please enter the number of days that the population"
                        <<" will grow"<<endl;
                cin>>nDays;
                while (nDays < 1){
                    cout<<"The number of days cannot be less than 1."
                            <<"Please enter a valid value"<<endl;
                    cin>>nDays;
                }
                cout<<"Please enter the average daily increase in population(%)"
                        <<endl;
                cin>>avgIncrease;

                while (avgIncrease < 1){
                    cout<<"The number of days cannot be less than 1."
                            <<"Please enter a valid value"<<endl;
                    cin>>avgIncrease;
                }
                for (int i = 1; i <=nDays; i++){
                    dailyPop = ((avgIncrease/100)*startPop)+ startPop;
                    cout<<"Population after day "<<i<<" is "<<dailyPop<<endl;

                    startPop = dailyPop;

                }
                //Exit Stage Right!
                return 0;
            }
            break;
         case 4:
            cout << "You have chosen ASCII Output"<<endl;{
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
            break;
         case 5:
            cout << "You have chosen Calculating Ocean Levels"<<endl;{
                //Declare Variables
                float level = 0;
                int maxYears = 25;


                //Input Data


                //Process the Data and output
                cout<<"The ocean is rising 1.5 millimeter per year"
                        <<" for the next 25 years."<<endl;;
                cout<<"Years                 millimeters"<<endl;
                cout<<"---------------------------------"<<endl;
                for (int i = 1; i <= maxYears; i++)
                {
                    level += 1.5;
                    cout<<" "<<setw(25)<<left<<i<<left<<setprecision(4)<<setw(26)<<level<<endl;
                }           



                //Exit Stage Right!
                return 0;
            }


            break;
         case 6:
            cout << "You have chosen Calculating Calories burned on a treadmill"
                    <<endl;{
                //Declare Variables
                float caloriesBurned;
                float caloriesMinute = 3.6f; //Calories burned in a minute
                //Process the Data and output
                cout<<"A person burns 3.6 calories a minute while running."
                        <<endl;
                cout<<"Minutes                  Calories"<<endl;
                cout<<"---------------------------------"<<endl;
                for (int i = 10; i <= 30; i+=5)
                {
                    caloriesBurned = i * caloriesMinute;
                    cout<<"  "<<setw(26)<<left<<i<<left<<setprecision(6)
                            <<setw(26)<<caloriesBurned<<endl;
                }           
                //Exit Stage Right!
                return 0;
            }

            break;   
         case 7:
            cout << "You have chosen Calculating Membership fees";{
                //Declare Variables
                const float rate = 0.04; //fee increase rate
                const int years = 6;     //# of years of increase
                float mFee = 2500;       //initial fee cost



                //Input Data


                //Process the Data and output
                cout<<"New membership fees for the next 6 years are:"<<endl;
                cout<<"    Year                      Fee"<<endl;
                cout<<"---------------------------------------"<<endl;
                for (int i = 1; i <= years; i++)
                {
                    mFee = mFee + (mFee * rate);
                    cout<<"      "<<setw(24)<<left<<i<<left<<setprecision(6)
                            <<setw(26)<<mFee<<endl;
                }           



                //Exit Stage Right!
                return 0;
            }


            break;
         case 8:
            cout << "You have chosen Calculating Distance Traveled by a vehicle"
                    <<endl;{
                //Declare Variables
                int speed;      //Variables are self-explanatory
                float time;
                float distance;   


                //Input Data
                cout<<"What is the speed of the vehicle(MPH)?"<<endl;
                cin>>speed;

                while(speed <= 0){
                    cout<<"Speed must be greater than 0. Please enter a valid value"<<endl;
                    cin>>speed;
                }
                cout<<"How many hours did it travel?"<<endl;
                cin>>time;

                while (time <1){
                    cout<<"Time must be greater than 0. Please enter a valid value"<<endl;
                    cin>>time;
                }


                //Process the Data and output

                cout<<"    Year                      Fee"<<endl;
                cout<<"---------------------------------------"<<endl;
                for (int i = 1; i <= time; i++)
                {
                    distance = speed *i;
                    cout<<"      "<<setw(24)<<left<<i<<left<<setprecision(6)<<setw(26)
                            <<distance<<endl;
                }           



                //Exit Stage Right!
                return 0;
            }

            break;
         case 9:
            cout << "You have chosen Calculating Increasing Penny pay"<<endl;{
                //Declare Variables
                int nDays;
                float money = 1.0;
                float total = 0.0;
                float payDay = 0.0;



                //Input Data
                cout<<"Calculate your increasing penny pay!"<<endl;
                cout<<"Enter the number of days you were paid"<<endl;
                cin>>nDays;

                while(nDays < 1){
                    cout<<"Number of days must be greater than 0."
                            <<"Please enter a valid value"<<endl;
                    cin>>nDays;
                }



                //Process the Data and output

                cout<<"    Day                      Pay"<<endl;
                cout<<"---------------------------------------"<<endl;
                for (int i = 1; i <= nDays; i++)
                {
                    payDay = money/100;
                    total += payDay;
                    money *=2;
                    cout<<"     "<<setw(24)<<left<<i<<left<<setprecision(6)<<"$"
                            <<setw(26)<<payDay<<endl;
                }           
                cout<<endl<<endl<<"     Your total earnings are $"<<total<<endl;


                //Exit Stage Right!
                return 0;
            }

            break;
         case 10:
            cout << "You have chosen Calculating Hotel Occupancy"<<endl;{
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
            break; 
            case 11:
            cout << "Goodbye."<<endl;
            break;
        default:
            cout<< "Your selection must be between 1 and 10!"<<endl;

        }

}while(input!=11);    




    //Output the processed data
    
    //Exit Stage Right!
    return 0;
    

}