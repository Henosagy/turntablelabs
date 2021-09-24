#include <iostream>
# include <string>

using namespace std;

typedef string StringArray[10];

int main(){ 
	StringArray sarr;

	cout << "Enter 10 strings: " << endl;
	for(int i=0; i < 10; i++){
		cin >> sarr[i];
	}

	cout << endl;

	cout << "The 10 inputed strings are: " << endl;

	for(int j=0; j < 10 ; j++){
		cout << j+1 << ": " << sarr[j] << endl;
	}
	return 0;
}
