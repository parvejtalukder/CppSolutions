#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> numbers;
    for(int i = 0; i < n; i++) {
        int m;
        cin >> m;
        numbers.push_back(m);
    }
    cout << "After Input:" << endl;
    for(int j = 0; j < n; j++) {
        cout << numbers[j];
        if (j != n) {
            cout << " ";
        } 
    }
    cout << endl;
    cout << "Sorted Value:" << endl;
    sort(numbers.begin(), numbers.end());
    for(int k = 0; k < n; k++) {
        cout << numbers[k];
        if (k != n) {
            cout << " ";
        } 
    }
    cout << endl;
    cout << "Reversed Value:" << endl;
    reverse(numbers.begin(), numbers.end());
    for(int k = 0; k < n; k++) {
        cout << numbers[k];
        if (k != n) {
            cout << " ";
        } 
    }
    cout << endl;
    numbers.insert(numbers.begin() + 3, 65);
    cout << "Inserted New Value 65 at index 3" << endl;
    for(int k = 0; k < n; k++) {
        cout << numbers[k];
        if (k != n) {
            cout << " ";
        } 
    }
    cout << endl;
    numbers.pop_back();
    cout << "Removed the last one: " << endl;
    for(int k = 0; k < n; k++) {
        cout << numbers[k];
        if (k != n) {
            cout << " ";
        } 
    }
    cout << endl;
    numbers.clear();
    cout << "Cleared the vector: " << endl;
    if (numbers.empty()) {
        cout << "[] [] [] []";
    }
    cout << endl;
    return 0;
}