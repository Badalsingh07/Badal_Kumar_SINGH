#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    // Ensure the number is odd
    if (a % 2 == 0) {
        a = a - 1; 
    }

    // Print series of odd numbers
    for (int i = 1; i <= a; i++) {
        cout << (2 * i - 1);
        if (i < a) {
            cout << ", "; 
        }
    }

    cout << endl;
    return 0;
}
