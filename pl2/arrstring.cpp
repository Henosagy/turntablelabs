#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

typedef string StringArray[10];

void sort(string s[], int n)
{
    for (int i=1 ;i<n; i++)
    {
        string temp = s[i];
        int j = i - 1;
        while (j >= 0 && temp.length() < s[j].length())
        {
            s[j+1] = s[j];
            j--;
        }
        s[j+1] = temp;
    }
}

void printArraystring(string str[], int n)
{
    for (int i=0; i<n; i++)
        cout << str[i] << endl;
}

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

	int n = sizeof(sarr)/sizeof(sarr[0]);
        sort(sarr, n);
        printArraystring(sarr, n);


	return 0;
}
