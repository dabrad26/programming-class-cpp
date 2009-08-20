#include <iostream>
using namespace std;

int main()
{
	cout << "Enter upercase letter: ";
	char uppercase;
	cin >> uppercase;
	
	int offset = 'a' - 'A';
	char lowercase = uppercase + offset;

	cout << "The lowercase is: " << lowercase << endl;

	return 0;

}