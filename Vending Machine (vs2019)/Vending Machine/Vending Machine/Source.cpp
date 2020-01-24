#include <iostream>;
#include <string>
using namespace std;

int main()
{
	double product1 = 1.50; //These are the different prices for the products
	double product2 = 1.79;
	double product3 = 1.35;
	double product4 = .80;
	double product5 = .90;
	double customerMoney = 0.00; //this float holds the amount of money the customer has

	cout << "How much money do you have? ";
	cin >> customerMoney; //takes in the user input for their amount of money

	while (customerMoney >= .9) // means that if enough money isn't put in then it won't allow anything to be bought
	{
		int customerChoice = 0; //stores if the customer wants to continue or not
		int exitProgram = 2; // sets exit program to false to begin with

		cout << "Which product would you like to buy?" << endl; //asks which product the customer wishes to buy
		cout << "1. Sprite" << endl;
		cout << "2. Coke" << endl;
		cout << "3. Monster" << endl;
		cout << "4. Still Water" << endl;
		cout << "5. Sparkling Water" << endl;
		cin >> customerChoice;
		if (customerChoice == 1)
		{
			cout << "You have selected a Sprite" << endl;// repeated sets of code saying what purchase was made, minusing cost from customer money and returning the change
			customerMoney = customerMoney - product1;
			cout << "You have £" << customerMoney << " left" << endl;

			cout << "Would you like to exit the program? (Enter '1' to exit and '2' if there is something else you wish to buy)" << endl;
			cin >> exitProgram;
			cin.clear();
			if (exitProgram == 1)
			{
				cout << "Thank you, please take your £" << customerMoney << endl;
				customerMoney = 0;
				return 0;
			}
			else if (exitProgram == 2)
			{
				break;
			}
		}
		else if (customerChoice == 2)
		{
			cout << "You have selected a Coke" << endl;
			customerMoney = customerMoney - product2;
			cout << "You have £" << customerMoney << " left" << endl;

			cout << "Would you like to exit the program? (Enter '1' to exit and '2' if there is something else you wish to buy)" << endl;
			cin >> exitProgram;
			cin.clear();
			if (exitProgram == 1)
			{
				cout << "Thank you, please take your £" << customerMoney << endl;
				customerMoney = 0;
				return 0;
			}
			else if (exitProgram == 2)
			{
				break;
			}
		}
		else if (customerChoice == 3)
		{
			cout << "You have selected a Monster Energy" << endl;
			customerMoney = customerMoney - product3;
			cout << "You have £" << customerMoney << " left" << endl;

			cout << "Would you like to exit the program? (Enter '1' to exit and '2' if there is something else you wish to buy)" << endl;
			cin >> exitProgram;
			cin.clear();
			if (exitProgram == 1)
			{
				cout << "Thank you, please take your £" << customerMoney << endl;
				customerMoney = 0;
				return 0;
			}
			else if (exitProgram == 2)
			{
				break;
			}
		}
		else if (customerChoice == 4)
		{
			cout << "You have selected a Still Water" << endl;
			customerMoney = customerMoney - product4;
			cout << "You have £" << customerMoney << " left" << endl;

			cout << "Would you like to exit the program? (Enter '1' to exit and '2' if there is something else you wish to buy)" << endl;
			cin >> exitProgram;
			cin.clear();
			if (exitProgram == 1)
			{
				cout << "Thank you, please take your £" << customerMoney << endl;
				customerMoney = 0;
				return 0;
			}
			else if (exitProgram == 2)
			{
				break;
			}
		}
		
		else {
			cout << "You don't have enough money to be able to purchase anything, thank you for using this vending machine" << endl;
		}
		
	}
	
	cin.ignore();
	cin.get();
	return 0;
}