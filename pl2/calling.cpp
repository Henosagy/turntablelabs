#include <iostream>

using namespace std;

int a, b, result;

int input(){
    cout << "Enter two integers: ";
    cin >> a >> b;
    return a, b;
}

int caller(){
    input();
    result = a + b;
    return result;
}

int main(){
        caller();
        cout << result << endl;

        return 0;
}
