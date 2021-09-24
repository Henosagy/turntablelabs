#include<iostream>

using namespace std;

int main(){
	int num1;
	int *ptrnum1;
	int &refnum1 = num1;

	const int num = 3;

	num1 = 5;
	ptrnum1 = &num1;
	refnum1 = num1;

	++*ptrnum1;
	++refnum1;

	cout << "Integer: " << num1 << endl;
	cout << "Pointer to integer: " << *ptrnum1 << endl;
	cout << "Reference to integer: " << refnum1 << endl;


	return 0;
}
