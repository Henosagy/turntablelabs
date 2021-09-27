#include <iostream>

using namespace std;

int main(){
	int hexnum{0xf3f2};
	int num{0437};
	int alpha{'a'};

	int a = 0437;

	cout << "The value in 0xf3f2 is " << hexnum << endl;
	cout << "The value in 0437 is " <<num << endl;
	cout << "The value in a is " << alpha << endl;
	cout << "The value in a is " << a << endl;

	return 0;
}
