#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

	
	char s;
	double num1,num2,result;

	cout << "Pick a number "; cin >> num1;
	cout << "Pick another number "; cin >> num2;
	cout << "Pick = , - , * , / : "; cin >> s;
	
	if (s == '+') {
	
		result = num1 + num2;

	}
	else if (s == '-') {

		result = num1 - num2;

	}
	else if (s == '*') {

		result = num1 * num2;

	}
	else if (s == '/') {

		result = num1 / num2;

	}
	else {

		cout << "Invalide input";

	}

	cout << "Answer is: " << result << endl;


	return 0;

}