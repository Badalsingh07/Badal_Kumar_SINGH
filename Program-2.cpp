#include <bits/stdc++.h>
using namespace std;

int main() {
    int limit;

    //
    cout << "Enter the number of terms: ";
    cin >> limit;

   
    for (int i = 1; i <= limit; i++) {
        cout << (2 * i - 1); //  odd number formula
        if (i < limit) {
            cout << ", "; 
        }
    }

    cout << endl;
    return 0;
}
