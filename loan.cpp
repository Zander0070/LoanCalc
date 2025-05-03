// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main(){
	// Lethal amount to kill a 35 grams mice is 5grams of sode
	// single can of pop contains 350 grams of code which 
	double loan, timePeriod;
	double Intrestrate = 0;
	bool EndTheWhile = false;

	cout << "Welcome to the Consumer loan application\n\n";

	while (EndTheWhile == false)
	{
		cout << "What is the face value of the loan : R";
		cin >> loan;
		cout << "What is the intrest rate : %";
		cin >> Intrestrate;
		Intrestrate = Intrestrate / 100;
		cout << "Over how many months will this payment be paid : ";
		cin >> timePeriod;

		cout << "-------------------------\n";

		cout << "Please note with a face value of R" << loan;
		double IntrestOnInvestment = loan * Intrestrate;
		double NewLoan = loan + IntrestOnInvestment;
		cout << "\n You will have to pay a total of R" << NewLoan << ",\nafter intrest has been accured on your intial loan\n\n";
		cout << "Please also note with a loan of R" << NewLoan << " with a payback period of " << timePeriod << " months\n";
		cout << "You wull be paying R" << NewLoan / timePeriod << "per month\n";

		cout << "\n\nWill you be able to pay back this loan? (yes/no)";
		string answer;
		cin >> answer;
		if (answer == "yes") {
			cout << "great\nwould you like to make another calculation (yes/no)";
			cin >> answer;

			if (answer == "yes") {
				cout << "\n------------------------------------\n";
			}
			else if (answer == "no") {
				EndTheWhile = true;
				}

		}
		else if (answer == "no") {
			cout << "Thats not good\nPlease do not take this loan then\n";
			cout << "would you like to re-calculate? (yes/no) :";
			cin >> answer;

			if (answer == "yes") {
				cout << "\n------------------------------------";
			}
			else if (answer == "no") {
				EndTheWhile = true;
			}
		}


	}







}

