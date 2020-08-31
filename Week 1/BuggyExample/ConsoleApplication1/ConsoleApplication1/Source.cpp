#include <iostream>

using namespace std;

int main()
{
	float x{ 0 };
	cout << "enter a number:  ";
	cin >> x;

	 if (x - int(x) > .00001)
		cout << "You have entered a number with a decimal.Please enter an integer." << endl;

	system("pause");
	return 0;
}