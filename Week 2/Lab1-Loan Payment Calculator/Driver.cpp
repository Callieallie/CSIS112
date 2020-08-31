/*
Caroline Wayne
CSIS112-002
Lab1 - Loan Payment Calculator/Driver.cpp
Creation Date: August 29, 2020
Explanation of what program does
Citations
*/

#include<iostream>
#include<string>

using namespace std;

// Global declarations: Constants and type definitions only -- no variables
enum CreditScore { EXCELLENT, GOOD, FAIR, BAD, UNIDENTIFIED };

//Function prototypes
void getData(CreditScore&, double& ); // Pass credit score by reference
// void showMenu(menuItemType mList[NO_OF_ITEMS], menuItemType orderList[ITEMS_ORDERABLE], char& selectionDecision, int& selectionsMade);
// void printCheck(menuItemType mList[NO_OF_ITEMS], menuItemType orderList[ITEMS_ORDERABLE], int& selectionsMade);
// void makeSelection(menuItemType mList[NO_OF_ITEMS], menuItemType orderList[ITEMS_ORDERABLE], char& selectionDecision, int& selectionsMade);

int main() {
	double principle = 0;
	double rate = 0;
	int num_periods = 0;
	int credit_score = 0;
	CreditScore credit = CreditScore::UNIDENTIFIED;

	getData(credit, principle);
	cout << principle;
}

void getData(CreditScore& credit, double& principle) {
	cout << "Enter a principle amount: ";
	cin >> principle;
	//cout << endl;
}