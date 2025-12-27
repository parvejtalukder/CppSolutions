// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N
 
#include <bits/stdc++.h>
using namespace std;
 
void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

// list <int> List;
void toPrint(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            cout << arr[i] << " ";
        } 
    }
    for(int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            cout << arr[i] << " ";
        } 
    }
    cout << "\n";
} 
 
int main() {
    pht();
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    toPrint(arr, n);
    // if ()
}