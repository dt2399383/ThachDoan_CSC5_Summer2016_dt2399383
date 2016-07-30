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
void menu();                    //Menu
void intro();                   //Intro
float songChk(float&);          //Song Check Game
int mGameChk(int&);
float battle(float&, float&);   //Battle function
int getCoin(int&);              //Get player coin side function
int coinToss(int&);             //Coin Toss function
void empPrmpt();                //Hooper Attack prompt

//Hooper's attack damage calculation function
float hoopAtk(float& hDmg, float power, int resonance=10){
    hDmg = power + resonance;
    return hDmg;
}
float hoopEmp(float&, float&, float); //Hooper's Attack function

//Execution Begins Here!


int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char anyKey;
    string fName, lName;
    string lyric1, lyric2;
    
    unsigned int harpoon = 30;
    unsigned int pistol = 20;
    unsigned int barrel = 2;
    
    
    unsigned int pHealth = 1750;
    float sHealth = 3400;
    int bHealth = 3750;
    float pTotDmg = 0.0f;
    float pTakDmg = 0.0f;
    
    int sRage = 0;
    unsigned char die;
    
    float pAtk = 50.0f;
    float sAtk = 666.0f;
    float power = 20.0f;
    float hDmg = 0.0f;
    int resonance;
    
    char atkType;         //Type of attack
    
    char choice;          //menu choice
    int minPick = 0;      //mini game choice
    
    int coinCall;         //Side of coin called by player
    int coin;             //Outcome of coin
    ofstream out;
    
    //Open files and Input Data
    out.open("Game Stats.txt");
    
    //Input Data
    do{
        menu();
        cin>>choice;
    
    //Process the Data and Display Results
        switch(choice){
            case '1':
                cout<<"You have chosen to play!"<<endl<<endl;
                cout<<"Please enter your first and last name:"<<endl;
                cin>>fName>>lName;
                intro();
                songChk(pAtk);
                
                mGameChk(minPick);
                //while(minPick == 1){
                    
                //}
                
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
                    if(sHealth >= 5000){
                        cout<<"The shark is still full of vigor!"<<endl;

                        cout<<"The shark attacks your boat again!"<<endl;

                        bHealth = bHealth-sAtk;
                        cout<<"Your boat takes "<<sAtk<<" damage!"<<endl;
                        cout<<"Boat hull strength: "<<bHealth<<endl;

                        cout<<"You decide to attack the shark!"<<endl;
                        cout<<"Enter any key to continue"<<endl;
                        cin>>anyKey;
                        for(int i = 1; i < 2; i++){
                            empPrmpt();
                            hoopAtk(hDmg, power);
                            hoopEmp(sHealth, power, hDmg);
                        }
                        battle(sHealth, pAtk);
                            
                         
                    }else if(sHealth >2500 && sHealth < 5000){
                        cout<<"The shark is showing signs of fatigue"<<endl;

                        cout<<"The shark attacks your boat again!"<<endl;

                        bHealth = bHealth-sAtk;
                        cout<<"Your boat takes "<<sAtk<<" damage!"<<endl;
                        cout<<"Boat hull strength: "<<bHealth<<endl;

                        cout<<"You decide to attack the shark!"<<endl;
                        cout<<"Enter any key to continue"<<endl;
                        cin>>anyKey;
                        battle(sHealth, pAtk);
                        

                    }else if(sHealth > 0 && sHealth < 2500){
                         cout<<"The shark is nearing death!"<<endl;
                        
                        cout<<"The shark attacks your boat again!"<<endl;

                        bHealth = bHealth-sAtk;
                        cout<<"Your boat takes "<<sAtk<<" damage!"<<endl;
                        cout<<"Boat hull strength: "<<bHealth<<endl;

                        cout<<"You decide to attack the shark!"<<endl;
                        cout<<"Enter any key to continue"<<endl;
                        cin>>anyKey;
                        battle(sHealth, pAtk);
                        
                    }else{
                        cout<<endl;
                        getCoin(coinCall);
                        coinToss(coin);
                        if(coinCall == coin){
                        cout<<"You beat Quint! You earn $6,666!"<<endl;
                        }else{
                            cout<<"You lost to Quint! You earn $3,333!"<<endl;
                        }
                        return 0;
                    }
                    
                }while(bHealth>0 && bHealth < 5000);
                //-----------------------Battle end----------------------------
                if(pHealth <= 0){
                        cout<<"You have died!"<<endl;
                }
                
                //---------------------------Battle in water--------------------
                if(bHealth <= 0 && pHealth > 0 && sHealth > 0){
                    cout<<endl;
                    cout<<"Your boat has been destroyed and you along with your"
                            <<" friends have fallen into the water!"<<endl;
                    cout<<"You watch as Quint gets eaten alive! You search for "
                            <<"Hooper, but he is no where to be found!"<<endl; 
                    cout<<endl<<"The odds are definitely against you!"<<endl;
                    cout<<"Luckily, you were able to find a machete lodged into "
                            <<"debris from the ship"<<endl;
                    cout<<"Your health: "<<pHealth<<endl;
                    cout<<"Shark's Health: "<<sHealth<<endl;
                    while(pHealth >= 0){ 
                        if(pHealth <= 0 || pHealth > 5000){
                        cout<<endl;
                        cout<<"The shark catches you off guard and devours you!"
                                <<endl<<"!!!You are DEAD!!!"<<endl;
                        cout<<"The credits roll and your soiled swim trunks"
                                <<" float up to the surface of the water..."<<endl;
                        return 0;
                        }
                        
                        cout<<"What do you want to do?"<<endl;
                        cout<<"(1) Attack"<<endl;
                        cout<<"(2) Try to Hide"<<endl;
                        cin>>atkType;
                        die=rand()%6+1; //Random number [1,6]
                        if(atkType=='1'){
                            sHealth = sHealth-(pAtk+30)+(pAtk*die/8);
                            cout<<"You attack the shark with the machete and do "
                                        <<(pAtk+30)+(pAtk*die/8)<<" damage!"<<endl;
                            cout<<"The shark swims by you and bites you!"<<endl;
                            cout<<"You bleed for 250 damage!"<<endl;
                            pHealth = pHealth - 250;
                            cout<<"Shark Health: "<<setprecision(4)<<sHealth<<endl;
                            cout<<"Your health: "<<pHealth-250<<endl;
                            cout<<"The shark smells your blood and narrows its "
                                    <<"search area!"<<endl;
                        }
                        if(pHealth <= 0 || pHealth > 5000){
                        cout<<endl;
                        cout<<"The shark catches you off guard and devours you!"
                                <<endl<<"!!!You are DEAD!!!"<<endl;
                        cout<<"The credits roll and your soiled swim trunks"
                                <<" float up to the surface of the water..."<<endl;
                        return 0;
                        }
                        if(sHealth<=0){
                            cout<<endl;
                            getCoin(coinCall);
                            coinToss(coin);
                            if(coin == coinCall){
                            cout<<"You beat Hooper! You earn $6,666!"<<endl;
                            }else{
                                cout<<"You lost to Hooper! You earn $3,333!"<<endl;
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
                if(sHealth <=0 ){
                    cout<<endl;
                    getCoin(coinCall);
                    coinToss(coin);
                    if(coin == coinCall){
                    cout<<"You beat Hooper! You earn $6,666!"<<endl;
                    }else{
                        cout<<"You lost to Hooper! You earn $3,333!"<<endl;
                    }
                    
                }
                if(pHealth <= 0){
                        cout<<"You have died!"<<endl;
                }
               
                
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

int getCoin(int& coinCall){
    cout<<"!!!CONGRATULATIONS!!!"<<endl;
    cout<<"You have successfully killed the shark!"<<endl;
    cout<<"The $10,000 bounty is yours!"<<endl;
    cout<<"Hooper: 'Don't forget about my share!'"<<endl;
    cout<<"You and Hooper decide to flip a coin to decide"
            <<" who will get two-thirds of the bounty!"<<endl;
    cout<<"Call the side of the coin you want:"<<endl;
    cout<<"(1)Heads"<<endl;
    cout<<"(2)Tails"<<endl;
    cin>>coinCall;
    return coinCall;
}
int coinToss(int& coin){
    unsigned char die;
    die=rand()%6+1; //Random number [1,6]
    if(die%2==0){
        int coin = 1;
        cout<<"The coin came up heads!"<<endl;
    }else{
        int coin = 2;
        cout<<"The coin came up tails!"<<endl;
    }
    return coin;
}

void empPrmpt(){
    char anyKey;
    cout<<"Hooper EMPs the shark!"<<endl;
}
float hoopEmp(float& sHealth, float& power, float hDmg){
    sHealth = sHealth - hDmg;
    for(int i = 1; i<=3; i++){
        power = power+((power*i)/2);
    }
    cout<<"Hooper hits the shark for "<<hDmg<<" damage!"<<endl;
    return power;
}


float battle(float& sHealth, float&pAtk){
    unsigned int harpoon = 50;
    unsigned int pistol = 40;
    unsigned int barrel = 2;
    unsigned char die;

    char atkType;
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
        pAtk += 20;
        sHealth = sHealth-(pAtk+(pAtk*barrel)+(pAtk*die/10));
        cout<<"You attach the shark with a barrel and do "
                <<pAtk+(pAtk*barrel)+(pAtk*die/10)<<" damage!"<<endl;
    }
    cout<<"Shark Health: "<<setprecision(6)<<sHealth<<endl;
    return sHealth;
}
int mGameChk(int& minPick){
    cout<<"Hooper has become bored and asks if you would like to "
                        <<"play a game of Tic-Tac-Toe with him"<<endl;
    cout<<"Do you accept?"<<endl;
    cout<<"Please enter: (1) to play with Hooper"<<endl;
    cout<<"              (2) to chum the waters"<<endl;
    cin>>minPick;
}

float songChk (float& pAtk){
    string lyric1, lyric2;
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
        cout<<"You gain +40 to your attack power!"<<endl<<endl;
    }else{
        cout<<"Quint: That's not how the song goes!"<<endl<<endl;
    }
    return pAtk;
}

void intro(){
    char anyKey;

    cout<<"    For the past week, the summer colony of Amity Island"
            <<" has been plagued with attacks from a rogue "<<endl;
    cout<<"great white shark. The town is desperate to get rid"
            <<" of the shark by July 4th, the most profitable"<<endl;
    cout<<"time for the island. The town is offering a $10,000 "
            <<"bounty for the shark dead or alive."<<endl;
    cout<<"   Being a poor university student you find this offer"
            <<" too good to turn down, so you pack your bags and "<<endl;
    cout<<"head to Amity Island to become a shark hunter."<<endl<<endl;
    cout<<"Press any key to continue"<<endl;
    cin>>anyKey;
    cout<<"   When you arrive on Amity Island, a local shark hunter"
            <<" by the name of Quint offers to help you hunt the"<<endl;
    cout<<"shark for a share of the bounty...Seeing as there are"
            <<" no other fishermen willing to help you, you "<<endl;
    cout<<"begrudgingly agree."<<endl<<endl;

    cout<<"     Armed with harpoons, barrels, and a pistol, you"
            <<" and Quint set sail to find and kill the shark!"<<endl<<endl;     
}

void menu(){
    cout<<"Welcome to Shark Hunter"<<endl;
    cout<<"What do you want to do?"<<endl;
    cout<<"Input 1 to play"<<endl;
    cout<<"Input 2 for options"<<endl;
    cout<<"Input 3 to quit"<<endl;
    cout<<endl;
}