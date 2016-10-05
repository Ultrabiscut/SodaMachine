#include <iostream>
#include "SodaMachine.h"
using namespace std;


// SodaMachine
// Tyler Timmins
// ITSE 2331 2001
//  A class and program that mimics the functionality of 
// a soda machine.


int main()
{
	//create variables
	int iSelection;
	bool bContinue = true;

	//create the pointer of type sodaMachine
	sodaMachine *p_cokeMachine;
	
	//create the dynamic object of type sodaMachine
	p_cokeMachine = new sodaMachine("Fanta", 5, "Coke", 5, "Red Flash", 5, "Root Beer", 5);

	//call function to set amount of money in change pool
	p_cokeMachine->setChangePool(5.00);

	//call the function to set the cost of the sodas
	p_cokeMachine->setCostOfSodas(1.25);

	//call the function to set the welcome message
	p_cokeMachine->setWelcomeMsg("Welome to Tyler's Soda Shop");

	
	//start a boolean controlled loop
	do
	{
		//output welcome message
		cout << p_cokeMachine->getWelcomeMsg() << endl << endl;


		//display the soda options
		p_cokeMachine->displaySodaOptions();
		cout << endl;

		//get selection from the user
		cout << "Please enter your selection (1-4): ";
		cin >> iSelection;
		cout << endl;

		//call purchase soda function
		bContinue = p_cokeMachine->purchaseSoda(iSelection);

	} while (bContinue);

	//deallocate memory
	delete p_cokeMachine;
	p_cokeMachine = NULL;

	return 0;
}