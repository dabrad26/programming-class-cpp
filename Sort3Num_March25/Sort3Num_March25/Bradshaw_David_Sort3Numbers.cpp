#include <iostream>
using namespace std;

int main() {

	int num1;
	int num2;
	int num3;

	cout << "Type in 3 numbers: \n" << "Number 1: ";
	cin >> num1;
	cout << "Number 2: ";
	cin >> num2;
	cout << "Number 3: ";
	cin >> num3;


	if (num1 < num2 && num2 < num3)
		cout << num1 << ", " << num2 << ", " << num3 << endl;
	else if (num2 < num3 && num3 < num1)
		cout << num2 << ", " << num3 << ", " << num1 << endl;
	else if (num1 < num3 && num3 < num2)
		cout << num1 << ", " << num3 << ", " << num2 << endl;
	else if (num3 < num2 && num2 < num1)
		cout << num3 << ", " << num2 << ", " << num1 << endl;
	else if (num3 < num1 && num1 < num2)
		cout << num3 << ", " << num1 << ", " << num2 << endl;
	else if (num2 < num1 && num1 < num3)
		cout << num2 << ", " << num1 << ", " << num3 << endl;
	else {
		cout << "Do not use duplicate numbers, or letters" << endl;
	}

	return 0;
}