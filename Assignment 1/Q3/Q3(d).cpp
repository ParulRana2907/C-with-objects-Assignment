// replace all vowels in the string with a specific character (eg: *)
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Please enter a string: ";
    getline(cin, input);
    for (char &c : input) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            c = '*';
        }
    }
    cout << "Modified string: " << input << endl;
    return 0;
}
