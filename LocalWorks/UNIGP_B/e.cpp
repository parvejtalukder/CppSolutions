#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    long long num;
    cin >> num;
    long long cnt = 0;
    vector <int> list;
    while(num > 0) {
        int dig = num % 10;
        list.push_back(dig);
        num = num / 10;
    }
    int size = list.size();
    reverse(list.begin(), list.end());
    for(int i = 0; i < size; i++) {
        int digita = 9 - list[i];
        if (i == 0 && digita == 0) {
            cout << list[i];
        } else if (digita <= list[i]) {
            cout << digita;
        } else {
            cout << list[i];
        }
    }
    cout << endl;
    return 0;
}