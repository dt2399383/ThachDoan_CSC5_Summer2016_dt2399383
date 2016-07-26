/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 21, 2016, 9:00 AM
 * Purpose: Chips and Salsa
 */

//System Libraries
#include <iostream> //Input/Output
#include <iomanip>  //Formatting
#include <string>   //String
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
int getTotal(int [], int);

int posOfSmallest(int [], int);

int posOfLargest(int [], int);

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    const int NUM_TYPES = 5;   
    int sales[NUM_TYPES];
    string name[NUM_TYPES] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int totalJarsSold, hiSalesProduct, loSalesProduct;
    //Input Data
    for (int type = 0; type < NUM_TYPES; type++)
	{
		cout << "Jars sold last month of " << name[type] << ": ";
      	cin  >> sales[type];
      
		while (sales[type] < 0)
		{	cout << "Jars sold must be 0 or more.  Please re-enter: ";
		   cin  >> sales[type];
		}
	}
    
    //Process the Data
    totalJarsSold  = getTotal(sales, NUM_TYPES);
   
    loSalesProduct = posOfSmallest(sales, NUM_TYPES);

    hiSalesProduct = posOfLargest(sales, NUM_TYPES);
    //Output the processed data
    cout << endl << endl;
    cout << "     Salsa Sales Report \n\n";
    cout << "Name              Jars Sold \n";
    cout << "____________________________\n";
 
    cout << name[0] << "                  " << sales[0] << "\n";
    cout << name[1] << "                " << sales[1] << "\n";
    cout << name[2] << "                 " <<sales[2] << "\n";
    cout << name[3] << "                   " << sales[3] << "\n";
    cout << name[4] << "                 " << sales[4] << "\n"; 
    
    cout << "\nTotal Sales:" << setw(15) << totalJarsSold << endl;
    cout << "High Seller: "  << name[hiSalesProduct] << endl;
    cout << "Low Seller : " << name[loSalesProduct] << endl;  
    
    //Exit Stage Right!
    return 0;
}

int getTotal (int array[], int numElts)
{
	int total = 0;

	for (int type = 0; type < numElts; type++)
		total += array[type];
	return total;
}
int posOfLargest(int array[], int numElts)
{
	int indexOfLargest = 0;
	
	for (int pos = 1; pos < numElts; pos++)
	{
		if (array[pos] > array[indexOfLargest])
			indexOfLargest = pos;
	}
	return indexOfLargest;
}
int posOfSmallest(int array[], int numElts)
{
	int indexOfSmallest = 0;
	
	for (int pos = 1; pos < numElts; pos++)
	{
		if (array[pos] < array[indexOfSmallest])
			indexOfSmallest = pos;
	}		
	return indexOfSmallest;
}