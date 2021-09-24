#include <iostream>

using namespace std;

void char_print(int start, int end, char* word){
	cout << "[" << end - start << "] ";
	while(start != end){
		cout << word[start];
		start++;
	}
	cout << endl;

}

int main(){
	char sentence[100];
	int sentence_length;

	cout << "Enter sentence: " << endl;
	cin >> sentence;

	int startline = 0;
	int endline = 0;

	sentence_length = sizeof(sentence)/sizeof(sentence[0]);

	for(int i = 0; i < sentence_length; i++){
		if(sentence[i] == '-'){
			endline = i;
			char_print(startline, endline, sentence);
			startline = i + 1;
		}
		else if(sentence[i] == '\0'){
			endline = i;
			break;
		}
	}

	char_print(startline, endline, sentence);

	return 0;
}
