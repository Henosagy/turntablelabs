#include <iostream>

using namespace std;

int main(){
	float numbers[5];
	std::cout << "Enter five numbers: " << endl;
	for (int i = 0; i < 5; i++){
		std::cin >> numbers[i];
	}

	float temp;

	for (int j =0; j < 5; j++){
		temp += numbers[j];
	} 

	float mean;
	mean = (float)temp/5.00;
	std::cout << "The mean is " << mean << endl;

	return 0;
}
