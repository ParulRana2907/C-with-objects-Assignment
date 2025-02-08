// accept a string from the user
#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    cout << "Please enter : ";
    getline(cin, input);
    cout << "You have entered: " << input << endl;
    return 0;
}


