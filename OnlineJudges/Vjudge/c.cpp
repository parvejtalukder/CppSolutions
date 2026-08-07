#include <bits/stdc++.h>
using namespace std;

vector <int> arr; 
int f = 0;

int bs(int left, int right) {

    if (left > right) return -1;
    
    int mid = (left + right)/2;
    if (arr[mid] == f) {
        return mid;
    } else if (f < arr[mid]) {
        bs(left, mid - 1);
    }
    return bs(mid + 1, right);
}

int main() {
    int s;
    cin >> s >> f;
    arr.resize(s);
    for(int i = 0; i < s; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << bs(0, s - 1) << "\n";
    return 0;
}