#include <iostream>
using namespace std;

int main() {
    int n;

    // Accept the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamically allocate memory for an array of floats
    float* arr = new float[n];

    // Accept the elements
    cout << "Enter " << n << " float numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Print alternate elements of the array
    cout << "Alternate elements of the array are: ";
    for (int i = 0; i < n; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the allocated memory
    delete[] arr;

    return 0;
}
