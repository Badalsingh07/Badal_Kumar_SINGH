#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    map<int, int> countMap;

    // Initialize map for numbers 1 to 9
    for (int i = 1; i <= 9; i++) {
        countMap[i] = 0;
    }

    // Count multiples
    for (int i = 1; i <= 9; i++) {
        for (int num : numbers) {
            if (num % i == 0) {
                countMap[i]++;
            }
        }
    }

    // Display result
    cout << "{";
    for (auto it = countMap.begin(); it != countMap.end(); ++it) {
        cout << it->first << ": " << it->second;
        if (next(it) != countMap.end()) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}
