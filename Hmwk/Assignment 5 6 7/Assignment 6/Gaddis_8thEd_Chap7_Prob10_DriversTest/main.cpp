/* 
 * File:   main.cpp
 * Author: Doan Thach 
 * Created on July 23, 2016, 7:00 PM
 * Purpose: drivers test
 */

//System Libraries
#include <iostream> //Input/Output
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
bool validateInput(char);
int checkAnswers();
void getIncorrectlyAnsweredQuestions();
void getOutput(int);

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    const int NUM_OF_QUESTIONS = 20;
    const int PASSING_SCORE = 15;
    char correctAnswers[] {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D',
                                                    'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};
    int incorrectlyAnsweredQuestions[NUM_OF_QUESTIONS];
    char userAnswers[NUM_OF_QUESTIONS];
    //Input Data
    
    //Process the Data
    int correctAnswersCounter = 0;

	for (int i = 0; i < NUM_OF_QUESTIONS; i++)
	{
            //get input and validate it
            do
            {
                cout << "Please enter your answer for question #" << i + 1 << " ";
                cin >> userAnswers[i];
            } while (!validateInput(userAnswers[i]));
	}

	correctAnswersCounter = checkAnswers();
	if (correctAnswersCounter < NUM_OF_QUESTIONS)
	{
            getIncorrectlyAnsweredQuestions();
	}

	getOutput(correctAnswersCounter);
    //Output the processed data
    
    //Exit Stage Right!
    return 0;
}

void getOutput(int counter)
{
    cout << "\nYou have " << (counter >= PASSING_SCORE ? "PASSED" : "FAILED") 
            << " the test" << endl;
    cout << "You have answered " << counter << " correctly and " 
            << (NUM_OF_QUESTIONS - counter) << " incorrectly" << endl;

    //if some answers were wrong, output what answer was wrong, what was the correct answer, and what was the user answer
    if (counter < NUM_OF_QUESTIONS)
    {
        cout << "The following questions were answered incorrectly: \n";
        for (int i = 0; i < NUM_OF_QUESTIONS - counter; i++)
        {
                cout << "Question #" << (incorrectlyAnsweredQuestions[i] + 1) 
                        << ". Correct answer was " 
                        <<correctAnswers[incorrectlyAnsweredQuestions[i]] 
                        << ". You answer was " 
                        << userAnswers[incorrectlyAnsweredQuestions[i]] << endl;
        }
    }
}

void getIncorrectlyAnsweredQuestions()
{
    int counter = 0; //index of the incorrectlyAnsweredQuestions array
    for (int i = 0; i < NUM_OF_QUESTIONS; i++)
    {
        if (correctAnswers[i] != toupper(userAnswers[i]))
        {
                incorrectlyAnsweredQuestions[counter] = i;
                counter++;
        }
    }
}

int checkAnswers()
{
    int counter = 0;
    for (int i = 0; i < NUM_OF_QUESTIONS; i++)
    {
        if (toupper(userAnswers[i]) == correctAnswers[i])
                counter++;
    }

    return counter;
}

bool validateInput(char answer)
{
    //only A, B, C, D is valid input
    if (toupper(answer) != 'A' && toupper(answer) != 'B' && toupper(answer) != 'C' && toupper(answer) != 'D')
    {
        cout << "\nInvalid input! ";
        return false;
    }

    return true;
}

