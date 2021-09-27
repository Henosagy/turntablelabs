# include <iostream>

using namespace std;

unsigned int rotate(unsigned int s, unsigned int r){
	s <<= r;
	return s;
}


int main(){
	unsigned int result;
	result = rotate(4,2);
	cout << result << endl;
	cout << hex << result;
	return 0;
}

