// reverse the array and display it
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "You entered: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Array in reverse order: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;

    return 0;
}
