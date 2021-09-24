#include <iostream>

using namespace std;

int main(){
	char checkerboard[3][3];

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			checkerboard[i][j] = '?';
		}
	}

	for(int a=0; a<3; a++){
		if(a == 0){
			for(int b=0; b<3; b++){
				cout << checkerboard[a][b] << " ";
			}
			cout << endl;
		}
		if(a == 1){
			for(int c=0; c<3; c++){
				cout << checkerboard[a][c] << " " ;
			}
			cout << endl;
		}
		if(a == 2){
			for(int d=0; d<3; d++){
				cout << checkerboard[a][d] << " " ;
			}
			cout << endl;
		}
	}

	return 0;
}

