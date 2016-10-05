#ifndef _SODAMACHINE_
#define _SODAMACHINE_

using namespace std;
#include <iomanip>
#include <iostream>
#include <string>
#include "windows.h"

class sodaMachine
{
private:
	//drink 1
	string m_drink1Name;
	int m_drink1Qty;
	
	//drink 2
	string m_drink2Name;
	int m_drink2Qty;
	
	//drink 3
	string m_drink3Name;
	int m_drink3Qty;
	
	//drink 4
	string m_drink4Name;
	int m_drink4Qty;
	
	//other member variables
	string m_welcomeMsg;
	double m_costOfSoda;
	double m_changePool;

public:
	sodaMachine(string, int, string, int, string, int, string, int); //default paramter constructor
	~sodaMachine(); //destructor

	//MUTATOR'S
	void setChangePool(double changePool);
	void setCostOfSodas(double costOfSoda);
	void setWelcomeMsg(string welcomeMsg);
	void displaySodaOptions();

	//ACCESSOR'S
	string getWelcomeMsg();
	void printMachineStatus();
	bool purchaseSoda(int);

};

#endif