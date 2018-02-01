#include<iostream>
using namespace std;

int main() {
	char continueProgram = 'a';

	do {
		cout << "Do you want to continue (y/n): ";
		cin >> continueProgram;

		switch (continueProgram == 'y') {
		case 'y':
			cout << "Going to continue";
			break;
		case 'n':
			cout << "Going to end";
			break;
		default:
			continueProgram = 'y';
		}
		}while (continueProgram == 'y');
		return 0;
	

}