#include <iostream>
#include <string>

using namespace std;

int main()
{
	int choice{ 0 };
	int numItems{ 0 };
	int sumItems{ 0 };
	string inventory[11];
	double cost[11];
	string cart[6];

	inventory[0] = "";
	inventory[1] = "Eggs";
	inventory[2] = "Bacon";
	inventory[3] = "Cereal";
	inventory[4] = "Apples";
	inventory[5] = "Bananas";
	inventory[6] = "Bread";
	inventory[7] = "Orange Juice";
	inventory[8] = "Oatmeal";
	inventory[9] = "Waffles";
	inventory[10] = "Hash browns";

	cost[0] = 0;
	cost[1] = 1.89;
	cost[2] = 3.99;
	cost[3] = 3.29;
	cost[4] = 2.99;
	cost[5] = 1.69;
	cost[6] = 2.49;
	cost[7] = 3.59;
	cost[8] = 3.99;
	cost[9] = 3.69;
	cost[10] = 2.29;
	 
	do
	{
		cout << "Select an item to add to your cart.\nThe maximum number of items you may add is 5." << endl;
		for (int i = 1; i <= 10; ++i)
		{
			cout << i << " - " << inventory[i] << " " << cost[i] << endl;
		}
		cout << "0 - Exit" << endl << endl;
		
		cin >> choice;

		cart[numItems++] = choice;
		cout << endl << inventory[choice] << " was added to your cart.\n\n";
	} while (choice != 0);

	//sum the purchases
	for (int i = 1; i <= 5; ++i)
		sumItems += cost[i];

	//display the cart contents
	for (int i = 1; i <= 5; ++i)
		cout << inventory[i] << " - " << cost[i] << endl;

	
	cout << "\nYour total purchases today are: " << sumItems << endl;

	return 0;
}