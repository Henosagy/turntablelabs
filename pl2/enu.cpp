#include <iostream>

using namespace std;

int main(){
	enum colours{RED, YELLOW, AMBER=YELLOW, GREEN=6, BLUE};
	colours col1 = RED;
	colours col2 = YELLOW;
	colours col3 = AMBER;
	colours col4 = GREEN;
	colours col5 = BLUE;

	cout << "RED enum value: "<< col1 << endl;
	cout << "YELLOW enum value:" << col2 << endl;
	cout << "AMBER enum value: " << col3 << endl;
	cout << "GREEN enum value: " << col4 << endl;
	cout << "BLUE enum value: " << col5 << endl;

	return 0;
}
