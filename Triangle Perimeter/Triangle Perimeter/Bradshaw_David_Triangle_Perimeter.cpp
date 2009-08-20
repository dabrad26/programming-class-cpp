#include <iostream>
using namespace std;

int main() {

	int side1;
	int side2;
	int side3;
	int temp1;
	int temp2;
	int temp3;

	cout << "Type in each side of the triangle: \n" << "First Side: ";
	cin >> side1;
	cout << "Second Side: ";
	cin >> side2;
	cout << "Third Side: ";
	cin >> side3;


	if (((side1 + side2) > side3) && ((side1 + side3) > side2) && ((side3 + side2) > side1)) {
		temp1 = side1 + side2 + side3;
		cout << "Your Perimeter is: " << temp1 << endl;
	}

	else {
		cout << "The input you entered is invalid, \n check your measurements and try again" << endl;
	}

	return 0;
}