/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 14, 2016, 8:30 PM
 * Purpose: Project 1 - Jaws/Shark Killer Game
 */

//System Libraries
#include <iostream> //Input/Output
#include <iomanip>  //Formatting
#include <cstdlib>  //Random number Seed
#include <ctime>    //Time for random seed
#include <cmath>    //Math Library
#include <fstream>  //File I/O
#include <string>   //String Library
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void menu();
//Execution Begins Here!


int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char anyKey;
    string fName, lName;
    string lyric1, lyric2, lyric3, lyric4;
    unsigned int harpoon = 30;
    unsigned int pistol = 20;
    unsigned int barrel = 2;
    unsigned int pHealth = 1001;
    float sHealth = 3000;
    unsigned int bHealth = 2250;
    int sRage = 0;
    unsigned char die;
    float pAtk = 25.0f;
    float sAtk = 250.0f;
    char atkType;
    char choice;
    int coinCall;
    int coin;
    ofstream out;
    
    //Open files and Input Data
    out.open("stats.dat");
    
    //Input Data
    do{
        menu();
        cin>>choice;
    
    //Process the Data and Display Results
        switch(choice){
            case '1':
                cout<<"You have chosen to play!"<<endl<<endl;
                cout<<"    For the past week, the summer colony of Amity Island"
                        <<" has been plagued with attacks from a rogue "<<endl;
                cout<<"great white shark. The town is desperate to get rid"
                        <<" of the shark by July 4th, the most profitable"<<endl;
                cout<<"time for the island. The town is offering a $10,000 "
                        <<"bounty for the shark dead or alive."<<endl;
                cout<<"   You are a poor university student and find this offer"
                        <<" too good to turn down. You pack your bags and "<<endl;
                cout<<"head to Amity Island to become a shark hunter."<<endl<<endl;
                
                cout<<"Please enter your first and last name:"<<endl;
                cin>>fName>>lName;
                
                cout<<"   When you arrive on Amity Island, a local shark hunter"
                        <<" by the name of Quint offers to help you hunt the"<<endl;
                cout<<"shark for a share of the bounty...Seeing as there are"
                        <<" no other fishermen willing to help you, you "<<endl;
                cout<<"begrudgingly agree."<<endl<<endl;
                
                cout<<"     Armed with harpoons, barrels, and a pistol, you"
                        <<" and Quint set sail to find and kill the shark"<<endl<<endl;
                cout<<"     Along the way, Quint starts to sing a sailor's song"
                        <<" known to boost the strength of whomever sings it"<<endl;
                
                
                cout<<"Quint: 'Farewell and adieu to you fair Spanish ladies "<<endl;
                cout<<"        Farewell and adieu you ladies of (1)_____. "<<endl;
                cout<<"        For we received orders for to sail back to Boston"<<endl;
                cout<<"        And soon never more will we see you (2)_____.'"<<endl;
                         
                cout<<"Please finish the song to gain additional attack power"<<endl;
                cout<<"Enter the first missing lyric"<<endl;
                cin>>lyric1;
                cout<<"Enter the second missing lyric"<<endl;
                cin>>lyric2; 
                
                if((lyric1=="spain" || lyric1=="Spain") && lyric2=="again"){
                    pAtk +=40;
                    cout<<"You gain +20 to your attack power!"<<endl<<endl;
                }else{
                    cout<<"Quint: That's not how the song goes!"<<endl<<endl;
                }
                
                //-------------------------Battle------------------------------
                cout<<"Boat hull strength: "<<bHealth<<endl;
                cout<<"After hours of chumming the waters, the great white "
                        <<" shark finally appears and attacks your boat!"<<endl;    
                bHealth = bHealth-sAtk;
                cout<<"Your boat takes "<<sAtk<<" damage!"<<endl;
                cout<<"Boat hull strength: "<<bHealth<<endl;
                
                cout<<"Enter any key to continue"<<endl;
                cin>>anyKey;
                
                cout<<"After recovering from the initial shock, you"
                        <<" decide to attack the shark!"<<endl;
                
                do{
                    while(sHealth > 1 && bHealth > 1){
                    
                        if(sHealth <= 1500 && sHealth >=501 && sHealth != 0){
                            cout<<"The shark is showing signs of fatigue"<<endl;
                            cout<<"The shark attacks your boat again!"<<endl;

                            bHealth = bHealth-sAtk;
                            cout<<"Your boat takes "<<sAtk<<" damage!"<<endl;
                            cout<<"Boat hull strength: "<<bHealth<<endl;

                            cout<<"You decide to attack the shark!"<<endl;
                            cout<<"Enter any key to continue"<<endl;
                            cin>>anyKey;
                            cout<<"How do you want to attack the shark?"<<endl;
                            cout<<"(1) Harpoon"<<endl;
                            cout<<"(2) Pistol"<<endl;
                            cout<<"(3) Attach Barrel"<<endl;
                            cin>>atkType;
                            
                            die=rand()%6+1; //Random number [1,6]

                            if(atkType=='1'){
                                sHealth = sHealth-(pAtk+harpoon)+(pAtk*die/10);
                                cout<<"You attack the shark with a harpoon and do "
                                        <<pAtk+harpoon<<" damage!"<<endl;
                            }
                            if(atkType=='2'){
                                sHealth = sHealth-(pAtk+pistol)+(pAtk*die/10);
                                cout<<"You attack the shark with a pistol and do "
                                        <<pAtk+pistol<<" damage!"<<endl;
                            }
                            if(atkType=='3'){
                                pAtk += 10;
                                sHealth = sHealth-(pAtk+(pAtk*barrel)+(pAtk*die/10));
                                cout<<"You attach the shark with a barrel and do "
                                        <<pAtk+(pAtk*barrel)<<" damage!"<<endl;
                            }
                            cout<<"Shark Health: "<<setprecision(4)<<sHealth<<endl;
                        }else if(sHealth <= 500 && sHealth != 0){
                            cout<<"The shark is nearing death!"<<endl;

                            cout<<"The shark attacks your boat again!"<<endl;

                            bHealth = bHealth-sAtk;
                            cout<<"Your boat takes "<<sAtk<<" damage!"<<endl;
                            cout<<"Boat hull strength: "<<bHealth<<endl;

                            cout<<"You decide to attack the shark!"<<endl;
                            cout<<"Enter any key to continue"<<endl;
                            cin>>anyKey;
                            cout<<"How do you want to attack the shark?"<<endl;
                            cout<<"(1) Harpoon"<<endl;
                            cout<<"(2) Pistol"<<endl;
                            cout<<"(3) Attach Barrel"<<endl;
                            cin>>atkType;
                            
                            die=rand()%6+1; //Random number [1,6]
                            
                            if(atkType=='1'){
                                sHealth = sHealth-(pAtk+harpoon)+(pAtk*die/10);
                                cout<<"You attack the shark with a harpoon and do "
                                        <<pAtk+harpoon+(pAtk*die/10)
                                        <<" damage!"<<endl;
                            }
                            if(atkType=='2'){
                                sHealth = sHealth-(pAtk+pistol)+(pAtk*die/10);
                                cout<<"You attack the shark with a pistol and do "
                                        <<pAtk+pistol+(pAtk*die/10)
                                        <<" damage!"<<endl;
                            }
                            if(atkType=='3'){
                                pAtk += 10;
                                sHealth = sHealth-(pAtk+(pAtk*barrel)+(pAtk*die/10));
                                cout<<"You attach the shark with a barrel and do "
                                        <<pAtk+(pAtk*barrel)+(pAtk*die/10)
                                        <<" damage!"<<endl;
                            }
                            cout<<"Shark Health: "<<setprecision(4)<<sHealth<<endl;
                           
                        }else{
                            cout<<"The Shark attacks again!"<<endl;

                            bHealth = bHealth-sAtk;
                            cout<<"Your boat takes "<<sAtk<<" damage!"<<endl;
                            cout<<"Boat hull strength: "<<bHealth<<endl;

                            cout<<"You decide to attack the shark!"<<endl;
                            cout<<"Enter any key to continue"<<endl;
                            cin>>anyKey;
                            cout<<"How do you want to attack the shark?"<<endl;
                            cout<<"(1) Harpoon"<<endl;
                            cout<<"(2) Pistol"<<endl;
                            cout<<"(3) Attach Barrel"<<endl;
                            cin>>atkType;
                            
                            die=rand()%6+1; //Random number [1,6]
                            if(atkType=='1'){
                                sHealth = sHealth-(pAtk+harpoon)+(pAtk*die/10);
                                cout<<"You attack the shark with a harpoon and do "
                                        <<pAtk+harpoon+(pAtk*die/10)
                                        <<" damage!"<<endl;
                            }
                            if(atkType=='2'){
                                sHealth = sHealth-(pAtk+pistol)+(pAtk*die/10);
                                cout<<"You attack the shark with a pistol and do "
                                        <<pAtk+pistol+(pAtk*die/10)
                                        <<" damage!"<<endl;
                            }
                            if(atkType=='3'){
                                pAtk += 10;
                                sHealth = sHealth-(pAtk+(pAtk*barrel)+(pAtk*die/10));
                                cout<<"You attach the shark with a barrel and do "
                                        <<pAtk+(pAtk*barrel)+(pAtk*die/10)
                                        <<" damage!"<<endl;
                            }
                            cout<<"Shark Health: "<<setprecision(4)<<sHealth<<endl;
                        }
                    }                    
                }while(sHealth > 1 && bHealth > 1);
                //-----------------------Battle end----------------------------
                if(pHealth <= 0){
                        cout<<"You have died!"<<endl;
                }
                
                //---------------------------Battle in water--------------------
                if(bHealth <= 0 && pHealth > 0 && sHealth > 0){
                    cout<<endl;
                    cout<<"Your boat has been destroyed and you have fallen"
                            <<" into the water! The odds are against you!"<<endl;
                    cout<<"You were able to grab hold of a machete before"
                            <<" you fell into the water."<<endl;
                    cout<<"Your health: "<<pHealth<<endl;
                    if(sHealth > 0){
                        for (int sRage = 1; sRage <= 5; sRage++ ){
                        
                        cout<<"What do you want to do?"<<endl;
                        cout<<"(1) Attack"<<endl;
                        cout<<"(2) Try to Hide"<<endl;
                        cin>>atkType;
                        die=rand()%6+1; //Random number [1,6]
                        if(atkType=='1'){
                            sHealth = sHealth-(pAtk+15)+(pAtk*die/10);
                            cout<<"You attack the shark with the machete and do "
                                        <<(pAtk+15)+(pAtk*die/10)<<" damage!"<<endl;
                            cout<<"The shark swims by you and bites you!"<<endl;
                            cout<<"You bleed for 250 damage!"<<endl;
                            pHealth = pHealth - 250;
                            cout<<"Shark Health: "<<setprecision(4)<<sHealth;
                            cout<<"Your health: "<<pHealth-250<<endl;
                            cout<<"The shark smells your blood and narrows its "
                                    <<"search area!"<<endl;
                        }
                        if(sHealth<=0){
                            cout<<endl;
                            cout<<"!!!CONGRATULATIONS!!!"<<endl;
                            cout<<"You have successfully killed the shark!"<<endl;
                            cout<<"The $10,000 bounty is yours!"<<endl;
                            cout<<"Quint: 'Don't forget about my share!'"<<endl;
                            cout<<"You and Quint decide to flip a coin to decide"
                                    <<" who will get two-thirds of the bounty!"<<endl;
                            cout<<"Call the side of the coin you want:"<<endl;
                            cout<<"(1)Heads"<<endl;
                            cout<<"(2)Tails"<<endl;
                            cin>>coinCall;
                            die=rand()%6+1; //Random number [1,6]
                            if(die%2==0){
                                int coin = 1;
                                cout<<"The coin came up heads!"<<endl;
                            }else{
                                int coin = 2;
                                cout<<"The coin came up tails!"<<endl;
                            }
                            if(coinCall == coin){
                                cout<<"You beat Quint! You earn $6,666!"<<endl;
                            }else{
                                cout<<"You lost to Quint! You earn $3,333!"<<endl;
                            }
                            return 0;
                        }
                        if(atkType=='2'){
                            cout<<"You try to hide from the shark inside some"
                                    <<"debris."<<endl;
                            cout<<"The debris hurts you a bit"<<endl;
                            pHealth = pHealth - 75;
                            cout<<"Your health: "<<pHealth;
                            cout<<"The shark smells your blood and narrows its "
                                    <<"search area!"<<endl;
                    
                        } 
                        
                        }
                        
                    }
                    
                    
                    
                }
                if(sHealth<=0){
                    cout<<endl;
                    cout<<"!!!CONGRATULATIONS!!!"<<endl;
                    cout<<"You have successfully killed the shark!"<<endl;
                    cout<<"The $10,000 bounty is yours!"<<endl;
                    cout<<"Quint: 'Don't forget about my share!'"<<endl;
                    cout<<"You and Quint decide to flip a coin to decide"
                            <<" who will get two-thirds of the bounty!"<<endl;
                    cout<<"Call the side of the coin you want:"<<endl;
                    cout<<"(1)Heads"<<endl;
                    cout<<"(2)Tails"<<endl;
                    cin>>coinCall;
                    die=rand()%6+1; //Random number [1,6]
                    if(die%2==0){
                        int coin = 1;
                        cout<<"The coin came up heads!"<<endl;
                    }else{
                        int coin = 2;
                        cout<<"The coin came up tails!"<<endl;
                    }
                    if( coin == coinCall){
                        cout<<"You beat Quint! You earn $6,666!"<<endl;
                    }else{
                        cout<<"You beat Quint! You earn $3,333!"<<endl;
                    }
                    
                        
                    
                }
                if(pHealth <= 0){
                        cout<<"You have died!"<<endl;
                }
                return 0;
                
                break;
                
            case '2':
                char opt1;
                char opt2;
                cout<<"You have chosen options:"<<endl;
                cout<<"Do you want to change your initial health? (y/n)"<<endl;
                cin>>opt1;
                if(opt1=='y'||opt1=='Y'){
                    cout<<"Please enter the amount of initial health you want"<<endl;
                    cin>>pHealth;
                }else{
                    cout<<"Do you want to change your initial attack power?"<<endl;
                    cin>>opt2;
                    if(opt2=='y'||opt2=='Y'){
                    cout<<"Please enter the initial attack power you want"<<endl;
                    cin>>pAtk;
                }
                break;
            case '3':
                cout<<"Goodbye!"<<endl;
                return 0;
                break;
            default:cout<<"Not option in menu"<<endl;
                }
        }
    }while(choice>='1'&&choice<='3');
    
    //Output the processed Data to a file
    out<<endl<<fName<<" "<<lName<<" Game Stats"<<endl;
    //Exit Stage Right!
    return 0;
}


void menu(){
    cout<<"Welcome to Shark Hunter"<<endl;
    cout<<"What do you want to do?"<<endl;
    cout<<"Input 1 to play"<<endl;
    cout<<"Input 2 for options"<<endl;
    cout<<"Input 3 to quit"<<endl;
    cout<<endl;
}