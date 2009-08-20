#include <iostream>
using namespace std;

int main()
{
	//Declare values
	int grade;

	//get input from user on the grade
	cout << "Please input your numeric grade: ";
	cin >> grade;

		//The grade is an A
		if ((grade >= 90) && (grade <= 100))
		{
			cout << "You made an A for the course!" << endl;
		}
		//The Grade is a B
		else if ((grade >= 80) && (grade < 90)) 
		{
			cout << "You made a B for the course!" << endl;
		}
		//The grade is a C
		else if ((grade >= 70) && (grade < 80)) 
		{
			cout << "You made a C for the course!" << endl;
		}
		//The grade is a D
		else if ((grade >= 60) && (grade < 70)) 
		{
			cout << "You made a D for the course!" << endl;
		}
		//The grade is a F
		else if ((grade >= 0) && (grade < 60)) {
			cout << "You made an F for the course" << endl;
		}
		//You did not enter a proper value
		else {
			cout << "Check the input, make sure you enter a number 0 to 100" << endl;
		}

	return 0;
}