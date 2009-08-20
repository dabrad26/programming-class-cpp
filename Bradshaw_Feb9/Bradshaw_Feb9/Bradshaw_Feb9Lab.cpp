#include <iostream>

using namespace std;

int main() {

	//Ask for grades;
	cout << "Insert all grades in percent format (0 - 100)" << endl;
	cout << "Let us start with your test grades, input them below:" << endl;
	double gradeone;
	cout << "Insert grade for Exam 1: ";
	cin >> gradeone;
	double gradetwo;
	cout << "Insert grade for Exam 2: ";
	cin >> gradetwo;
	double gradethree;
	cout << "Insert grade for Exam 3: ";
	cin >> gradethree;

	//Compute grade Averages;
	double average = (gradeone + gradetwo + gradethree) / 3;

	//Output to console
	cout << "The Average is: " << average << endl;

	//Input of Homework grades;
	//Ask for grades;
	cout << "Now let us work on your Home Work Grades, input them here:" << endl;
	double hwone;
	cout << "Insert grade for Homework 1: ";
	cin >> hwone;
	double hwtwo;
	cout << "Insert grade for Homework 2: ";
	cin >> hwtwo;
	double hwthree;
	cout << "Insert grade for Homework 3: ";
	cin >> hwthree;

	//Compute grade Averages;
	double hwaverage = (hwone + hwtwo + hwthree) / 3;

	//Output to console
	cout << "The Average is: " << hwaverage << endl;

	//Insert Final Exam Grade;
	double finalgrade;
	cout << "Insert your Final Exam Grade: ";
	cin >> finalgrade;

	//Computer complete Average
	double totalaverage = (average * .40) + (hwaverage * .35) + (finalgrade * .25);

	//Total Average output;
	cout << "Your total average for the semester is: " << totalaverage << endl;
	

	return 0;
}
