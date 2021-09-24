#include <iostream>

using namespace std;

int main(){
	int operand1;
	int operand2;
	char operator1;

	int result;

	cout << "Please input two operands: ";
	cin >> operand1 >> operand2;

	cout << "Please input an operator: ";
	cin >> operator1;

	switch(operator1){
		case '+':
			result = operand1 + operand2;
			cout << operand1 << " + " << operand2 << " = " << result << endl;
			break;

		case '*':
			result = operand1 * operand2;
			cout << operand1 << " * " << operand2 << " = " << result << endl;
			break;

		default:
			cout << "Invalid input" << endl;
	}

	return 0;
}
