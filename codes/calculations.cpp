#include <iostream>

int even_odd();

using namespace std;

int main(){
	int inputnumber = even_odd();

	if (inputnumber%2 == 0){
		for (int i=0; i < 20; i++){
			std::cout << inputnumber << " * " << (i+1) << " = "<< inputnumber * (i+1)  << endl;
		}
	}
	else{
		int count = 0;
		int j = 1;
		do{
			if(j%inputnumber != 0){
				std::cout << "Number " << count+1 << " which is " << j << " is not divisible by " << inputnumber << endl;
				count++;
			}
			j++;
		}
		while(count < 30);
	}
	return 0;
}


int even_odd(){
	int number;
	std::cout << "Enter a number: " << endl;
	std::cin >> number;
	return number;
}
