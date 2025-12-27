// https://vjudge.net/problem/codeforces-1352a
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

vector <int> outPut;

void Answer(int num) {
    int pow = 1, cnt = 0;
    if (num < 10) {
        cout << 1 << "\n";
        cout << num << "\n";
        return;
    }
    while(num > 0) {
        if (num % 10 > 0) {
            // cnt++;
            outPut.push_back((num % 10) * pow);
            cnt++;
        }
        num /= 10;
        pow *= 10;
        // cnt++;
    }
    cout << cnt << "\n";
    for(int i = outPut.size() - 1; i>= 0 ; i--) {
        // cout << one << " ";
        if (i == 0) {
            cout << outPut[i] << "\n";
        } else {
            cout << outPut[i] << " ";
        }
    }
    outPut.clear();
    // cout << "\n";
}

int main() {
    pht();
    int testCase;
    cin >> testCase;
    while(testCase--) {
        int numberInit;
        cin >> numberInit;
        Answer(numberInit);
        // cout << floor(numberInit) << endl;
    }
    return 0;
}