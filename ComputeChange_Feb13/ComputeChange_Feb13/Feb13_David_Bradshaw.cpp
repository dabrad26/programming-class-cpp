#include <iostream>
using namespace std;

int main() {
	//Receive Amount
	cout << "Enter an amount in double: ";
	double amount;
	cin >> amount;

	int remainingAmount = static_cast<double>(amount*100);

	//Find dollars
	int numberOfOneDollars = remainingAmount/100;
	remainingAmount = remainingAmount%100;

	//Find quarters
	int numberOfQuarters = remainingAmount/25;
	remainingAmount = remainingAmount%25;

	//Find dimes
	int numberOfDimes = remainingAmount/10;
	remainingAmount = remainingAmount%10;

	//Find nickels
	int numberOfNickels = remainingAmount/5;
	remainingAmount = remainingAmount%5;

	//Find pennies
	int numberOfPennies = remainingAmount;

	//Output to Console
	cout << "Your Amount: " << amount << " consist of \n" <<
		"\t" << numberOfOneDollars << " dollars\n" <<
		"\t" << numberOfQuarters << " quarters\n" <<
		"\t" << numberOfDimes << " dimes\n" <<
		"\t" << numberOfNickels << " nickels\n" <<
		"\t" << numberOfPennies << " pennies" << endl;

	return 0;
}