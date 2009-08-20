#include <iostream>

using namespace std;

int main() {

	double result;
	cout << "Insert number to move up by two decimals: ";
	cin >> result;
	double test = 100*result;
	cout << fixed << "The answer is: " << test << endl;
	

	return 0;
}