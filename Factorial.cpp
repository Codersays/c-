#include <iostream>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial of a negative number is not defined." << endl;
    } else {
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    }

    return 0;
}