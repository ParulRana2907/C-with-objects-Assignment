// check whether the string is a palindrome (ignoring spaces and case sensitivity)
#include <iostream>
using namespace std;

int main() {
    string str, rev = "";
    cout << "Enter a string: ";
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }

    if (str == rev)
        cout << "The given string is Palindrome\n";
    else
        cout << "The given string is not a palindrome\n";

    return 0;
}
