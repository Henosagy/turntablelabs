#include <iostream>
#include <string>
#include <list>
#include <vector>

using namespace std;

int main(){
        list<string> words;
        string word;
        int maxlength =0;
        string longestString = " ";
        cout << "Enter words: ";
        
        while(cin >> word){
            words.push_back(word);
        }

        for(string c : words){
                if(c.length() > maxlength){
                maxlength = c.length();
                longestString = c;
                }

        }
        
        cout << endl << "Longest String: " << longestString << endl;
        cout << "Length: " << maxlength << endl;

        return 0;
}
