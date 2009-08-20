#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

	cout << "Answer the following problems to the best of your ability!" 
		<< "\n To exit hit the red X in the top right! \n" << endl;

		srand(time(0));
		int number1 = rand() % 20;
		int number2 = rand() % 20;
	
	while (true)
	{


		if (number1 < number2)
		{
			int temp = number1;
			number1 = number2;
			number2 = temp;
		}

		cout << "What is " << number1 << " - " << number2 << " ?" << "\n Your answer is: ";
		int answer;
		cin >> answer;

		if (number1 - number2 == answer)
			cout << "You are so smart, that is right!, try some more to see how smart you are \n" << endl;
		else
			cout << "You are wrong! \n" << number1 << " - " << number2
			<< " Should be " << (number1 - number2) << "\n \n Do not give up, try again! \n" << endl;
	}
	return 0;
}