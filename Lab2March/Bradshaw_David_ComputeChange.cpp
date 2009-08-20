#include <iostream>
using namespace std;

int main()
{
  // Receive the amount
  cout << "Enter an amount in double: ";
  double amount;
  cin >> amount;

  int remainingAmount = static_cast<int>(amount * 100);

  // Find the number of one dollars
  int numberOfOneDollars = remainingAmount / 100;
  remainingAmount = remainingAmount % 100;
  

  // Find the number of quarters in the remaining amount
  int numberOfQuarters = remainingAmount / 25;
  remainingAmount = remainingAmount % 25;

  // Find the number of dimes in the remaining amount
  int numberOfDimes = remainingAmount / 10;
  remainingAmount = remainingAmount % 10;

  // Find the number of nickels in the remaining amount
  int numberOfNickels = remainingAmount / 5;
  remainingAmount = remainingAmount % 5;

  // Find the number of pennies in the remaining amount
  int numberOfPennies = remainingAmount;

  // Display results
  cout << "Your amount " << amount << " consists of \n";
  if (numberOfOneDollars != 0) {
    cout << "\t" << numberOfOneDollars;
	if (numberOfOneDollars >= 2) {
		cout << " dollars\n";
	}
	else {
		cout << " dollar\n";
	}
		
  }
  if (numberOfQuarters != 0) {
    cout << "\t" << numberOfQuarters;
		if (numberOfQuarters >= 2) {
		cout << " quarters\n";
	}
	else {
		cout << " quarter\n";
	}
  }
  if (numberOfDimes != 0) {
	  cout << "\t" << numberOfDimes;
	  	if (numberOfDimes >= 2) {
		cout << " dimes\n";
	}
	else {
		cout << " dime\n";
	}
  }
  if (numberOfNickels != 0) {
	  cout << "\t" << numberOfNickels;
	  	if (numberOfNickels >= 2) {
		cout << " nickels\n";
	}
	else {
		cout << " nickel\n";
	}
  }
  if (numberOfPennies != 0) {
  cout << "\t" << numberOfPennies;
  	if (numberOfPennies >= 2) {
		cout << " Pennies\n";
	}
	else {
		cout << " Penny\n";
	}
  }

  return 0;
}
