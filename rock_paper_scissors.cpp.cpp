// rock_paper_scissors.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Rock paper scissors lizard spock game */
/*
rock > scissors
scissors > paper
paper > rock
lizard > spock
spock > scissors
scissors > lizard
lizard > paper
paper > spock
spock > rock
rock > lizard
*/


#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {

	srand(time(NULL));

	int computer = rand() % 5 + 1;
	int user = 0;

	int rock = 1;
	int paper = 2;
	int scissor = 3;
	int lizzard = 4;
	int spock = 5;

	std::cout << "====================\n";
	std::cout << "Rock Paper Scissors Lizard Spock!\n";
	std::cout << "====================\n";

	std::cout << "1) Rock\n";
	std::cout << "2) Paper\n";
	std::cout << "3) Scissors\n";
	std::cout << "4) Lizzard\n";
	std::cout << "5) Spock\n";

	std::cout << "shoot!\n";

	std::cin >> user;

	if (user == rock && (computer == lizzard || computer == scissor)) {
		std::cout << "You Win\n";
	}
	else if (user == paper && (computer == rock || computer == spock)) {
		std::cout << "You Win\n";
	}
	else if (user == scissor && (computer == paper || computer == lizzard)) {
		std::cout << "You Win\n";
	}
	else if (user == lizzard && (computer == spock || computer == paper)) {
		std::cout << "You Win\n";
	}
	else if (user == spock && (computer == scissor || computer == rock)) {
		std::cout << "You Win\n";
	}
	else if (user == computer) {
		std::cout << "Tie!\n";
	}
	else {
		std::cout << "You lose\n";
	}

	std::cout << "Computer Chose " << computer << "\n";
	std::cout << "User Chose " << user << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
