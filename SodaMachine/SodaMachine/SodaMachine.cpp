#include "SodaMachine.h"

//define the defualt constructor
sodaMachine::sodaMachine(string drink1N, int drink1Q, string drink2N, int drink2Q, string drink3N, int drink3Q, string drink4N, int drink4Q)
{
	//drink 1
	m_drink1Name = drink1N;
	m_drink1Qty = drink1Q;

	//drink 2
	m_drink2Name = drink2N;
	m_drink2Qty = drink2Q;

	//drink 3
	m_drink3Name = drink3N;
	m_drink3Qty = drink3Q;

	//drink 4
	m_drink4Name = drink4N;
	m_drink4Qty = drink4Q;

	//other member variables
	m_welcomeMsg = " ";
	m_costOfSoda = 0.0;
	m_changePool = 0.0;
}

//define the destructor
sodaMachine::~sodaMachine()
{

}

//define the setChangePool
void sodaMachine::setChangePool(double changePool)
{
	m_changePool = changePool;
}

//define the setCostOfSodas
void sodaMachine::setCostOfSodas(double costOfSodas)
{
	m_costOfSoda = costOfSodas;
}

//define the setWelcomeMsg
void sodaMachine::setWelcomeMsg(string welcomeMsg)
{
	m_welcomeMsg = welcomeMsg;
}

//define the displaySodaOptions
void sodaMachine::displaySodaOptions()
{
	//drink 1
	if (m_drink1Qty > 0)
		cout << "1	" << m_drink1Name << endl;
	else
		cout << "1	" << m_drink1Name << " SOLD OUT" << endl;

	//drink 2
	if (m_drink2Qty > 0)
		cout << "2	" << m_drink2Name << endl;
	else
		cout << "2	" << m_drink2Name << " SOLD OUT" << endl;

	//drink 3
	if (m_drink3Qty > 0)
		cout << "3	" << m_drink3Name << endl;
	else
		cout << "3	" << m_drink3Name << " SOLD OUT" << endl;

	//drink 4
	if (m_drink4Qty > 0)
		cout << "4	" << m_drink4Name << endl;
	else
		cout << "4	" << m_drink4Name << " SOLD OUT" << endl;

}

//define the getWelcomeMsg
string sodaMachine::getWelcomeMsg()
{
	return m_welcomeMsg;
}

//define the printMachineStatus
void sodaMachine::printMachineStatus()
{
	//dipslay the header
	cout << "Brand \t"
		<< "Quantity \n";
	cout << "----------------\n";

	//drink 1
	cout << m_drink1Name << "\t" << m_drink1Qty << endl;
	
	//drink 2
	cout << m_drink2Name << "\t" << m_drink2Qty << endl;

	//drink 3
	cout << m_drink3Name << "\t" << m_drink3Qty << endl;

	//drink 4
	cout << m_drink4Name << "\t" << m_drink4Qty << endl;

	//output total money in machine
	cout << "Money In Machine: " << m_changePool << endl;

	//pause
	Sleep(5000);
	//clear screen
	system("cls");
	
}

//define the purchaseSoda
bool sodaMachine::purchaseSoda(int num)
{
	switch (num)
	{
	//if they select 0
	case 0:
		printMachineStatus();

		return true;
		//pause
		Sleep(5000);
		//clear screen
		system("cls");
		break;

	//drink 1
	case 1:
		if (m_drink1Qty > 0)
		{
			//lose a soda
			m_drink1Qty--;
			//add money to the change pool
			m_changePool = m_changePool + m_costOfSoda;
			//display enjoy soda
			cout << "Enjoy your " << m_drink1Name << " !!!" << endl;
		}
		else
			cout << "***SOLD OUT***" << endl;

		return true;
		//pause
		Sleep(5000);
		//clear screen
		system("cls");
		break;

	//drink 2
	case 2:
		if (m_drink2Qty > 0)
		{
			//lose a soda
			m_drink2Qty--;
			//add money to the change pool
			m_changePool = m_changePool + m_costOfSoda;
			//display enjoy soda
			cout << "Enjoy your " << m_drink2Name << " !!!" << endl;
		}
		else
			cout << "***SOLD OUT***" << endl;

		return true;
		//pause
		Sleep(5000);
		//clear screen
		system("cls");
		break;

	//drink 3
	case 3:
		if (m_drink3Qty > 0)
		{
			//lose a soda
			m_drink3Qty--;
			//add money to the change pool
			m_changePool = m_changePool + m_costOfSoda;
			//display enjoy soda
			cout << "Enjoy your " << m_drink3Name << " !!!" << endl;
		}
		else
			cout << "***SOLD OUT***" << endl;

		return true;
		//pause
		Sleep(5000);
		//clear screen
		system("cls");
		break;

	//drink 4
	case 4:
		if (m_drink4Qty > 0)
		{
			//lose a soda
			m_drink4Qty--;
			//add money to the change pool
			m_changePool = m_changePool + m_costOfSoda;
			//display enjoy soda
			cout << "Enjoy your " << m_drink4Name << " !!!" << endl;
		}
		else
			cout << "***SOLD OUT***" << endl;

		return true;
		//pause
		Sleep(5000);
		//clear screen
		system("cls");
		break;

	//case 999
	case 999:
		return false;
		//pause
		Sleep(5000);
		//clear screen
		system("cls");
		break;
	
	//default if they entered invalid case
	default:
		cout << "INVALID CASE ENTERED!";
		
		return true;
		//pause
		Sleep(5000);
		//clear screen
		system("cls");
		break;

	} //end switch

}