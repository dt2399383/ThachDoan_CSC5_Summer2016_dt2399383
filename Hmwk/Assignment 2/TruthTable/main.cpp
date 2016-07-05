/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on June 20, 2016, 7:00 PM
 * Purpose: First Program
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
    bool x,y;
    
    //Input Data
    
    //Process the Data
    
    //Output the processed Data
    //Heading
    cout<<"The Truth Table"<<endl;
    cout<<"X Y !X !Y X||Y X&&Y X^Y X^Y^Y X^Y^X !(X||Y) !X&&!Y ";
    cout<<"!(X&&Y) !X||!Y"<<endl;
    
    //First Row
    x=true;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"     ";
    cout<<endl;
    
    //Second Row
    x=true;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"     ";
    cout<<endl;
    
    //Third Row
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"     ";
    cout<<endl;
    
    //Fourth Row
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"     ";
    cout<<endl;
    
    //Exit Stage Right!
    return 0;
}

