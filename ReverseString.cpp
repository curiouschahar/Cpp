#include <iostream>
#include <string>
using namespace std;
int main() {
    cout << "Enter a String" << endl;
    string str;
    cin >> str;
    string rev = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }
    cout << "Reversed String is: " << rev << endl;
    return 0;
}