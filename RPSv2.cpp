#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	string rock, paper, scissors, choice;
	int userChoice, compChoice;
	bool repeat = false;
		
	rock = "Rock";
	paper = "Paper";
	scissors = "Scissors";
	
	void border();
	
	do {
		cout << "Please make a choice!\n";
		cout << "(Rock, Paper, Scissors - CASE SENSITIVE)\n\n";
		cout << "Choice: ";
		cin >> choice;
	
		if (choice == rock) {
			userChoice = 1;
			repeat = false;
		} else if (choice == paper) {
			userChoice = 2;
			repeat = false;
		} else if (choice == scissors) {
			userChoice = 3;
			repeat = false;
		} else {
			cout << "Please enter a valid input.\n\n";
			border();
			repeat = true;
		}
	} while(repeat);
	
	
	srand(time(0));
	compChoice = rand() % 3 + 1;
	
	if (compChoice == 1) {
		cout << "Computer: Rock\n\n";
	} else if (compChoice == 2) {
		cout << "Computer: Paper\n\n";
	} else {
		cout << "Computer: Scissors\n\n";
	}
	
	cout << "Result: \n";
	
	if (userChoice == compChoice) {
		cout << "It's a Draw!";
	} else if (userChoice == 1 && compChoice == 3 || userChoice == 2 && compChoice == 1 || userChoice == 3 && compChoice == 2) {
		cout << "You Win!";
	} else {
		cout << "You Lose!";
	}
	
	return 0;
} 

//Functions
void border() {
	cout << "---------------------------" << endl << endl;
}
