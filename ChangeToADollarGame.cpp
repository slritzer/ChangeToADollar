// Change for a Dollar Game
// Written by Stephanie Ritzer

#include <iostream>
using namespace std;


int main()
{

	const double PENNY_VALUE = 0.01,	//set coin values
		NICKEL_VALUE = 0.05,
		DIME_VALUE = 0.10,
		QUARTER_VALUE = 0.25,
		DOLLAR_VALUE = 1.00;

	int pennies,
		nickels,
		dimes,
		quarters;

	double totalValue;					//total value of coins


	//prompt user to enter number of each coin type
	cout << "Welcome to the change-counting game!\n\n"
		<< "How many of each coin should I use to make exactly $1?\n\n";

	cout << "Pennies: ";
	cin >> pennies;

	cout << "Nickels: ";
	cin >> nickels;

	cout << "Dimes: ";
	cin >> dimes;

	cout << "Quarters: ";
	cin >> quarters;

	//calculate total value of coins based on user input
	totalValue = (pennies * PENNY_VALUE) + (nickels * NICKEL_VALUE) + (dimes * DIME_VALUE) + (quarters * QUARTER_VALUE);

	//if-else if to notify user whether or not they picked the correct number of coins
	if (totalValue == DOLLAR_VALUE)
	{
		cout << "Congratulations! You won.\n";
	}

	else if (totalValue > DOLLAR_VALUE)
	{
		cout << "\n\nAccording to my calculations, that comes out to: $" << totalValue << "... which is more than $1.\n"
			<< "GAME OVER!";
	}

	else if (totalValue < DOLLAR_VALUE)
	{
		cout << "\n\n According to my calculations, that comes out to: $" << totalValue << "... which is less than $1.\n"
			<< "GAME OVER!";
	}
}

