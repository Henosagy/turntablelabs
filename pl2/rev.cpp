#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char sentence[100];
	cout << "Please enter a string of characters: ";
	cin.get(sentence,100);

	for(int i = strlen(sentence); i >= 0; i--){
		cout << sentence[i];
	}
	cout << endl;

	/*char  c;
	string reverse = "";
	while(cin.get(c))
		if(c== '\n') break;
		reverse = c + reverse;
	cout << endl << reverse << endl;*/
	return 0;
}
