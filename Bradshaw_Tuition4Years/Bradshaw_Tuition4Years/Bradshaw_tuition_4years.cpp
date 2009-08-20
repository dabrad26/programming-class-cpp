#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	double newTuition;
	double const IncreaseValue = 1.05;
	
	newTuition = 10000;
	//Find after ten year
	for(int year = 1; year <= 10; year++)
	{
		
			newTuition = (newTuition * IncreaseValue);
	}

	double year1;
	year1 = newTuition;	

	double fouryears = year1;
	
	double fouryearsTotal = 0;



	int yearNum = 1;



	while(yearNum < 5)
	{

		
		//calculate the yearly tution
		fouryearsTotal += fouryears;

		fouryears = (fouryears * IncreaseValue);

		


		yearNum++;
	}

	cout << "Your total cost for four years is $" << fixed << setprecision(2) << fouryearsTotal <<endl;


	return 0;
}