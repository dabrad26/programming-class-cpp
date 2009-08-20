#include <iostream>
#include <cmath>
using namespace std;

int main() {

	//Get info
	double investmentamount;
	cout << "What is the Invested Amount: ";
	cin >> investmentamount;

	double monthlyinterest1;
	cout << "What is the Annual Interest Rate: ";
	cin >> monthlyinterest1;

	double monthlyinterest = (monthlyinterest1 / 100)/ 12;

	int numberyears;
	cout << "What is the number of years: ";
	cin >> numberyears;

	//Calculate
	double accumulatedvalue = investmentamount *  pow(1+monthlyinterest, numberyears*12);

	//Output to Console
	cout << "Your Future Investment Value is " << accumulatedvalue << endl;

	return 0;
}