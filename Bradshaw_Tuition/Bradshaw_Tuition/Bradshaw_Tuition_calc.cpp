#include <iostream>
using namespace std;

int main()
{
	
	double newTuition;
	double const IncreaseValue = 1.05;
	
	newTuition = 10000;

	cout << "Current tuition is: $" << newTuition << endl;


	for(int year = 1; year <= 10; year++)
	{
		
			newTuition = (newTuition * IncreaseValue);
	}

	cout << "Tuition ten years from now is $" << newTuition << endl;

	return 0;
}