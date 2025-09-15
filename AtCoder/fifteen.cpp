/* https://vjudge.net/problem/codeforces-271a */
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

bool fourSlice(int nums) {
    int arr[4];
    int cnt = 0;
    while (nums > 0 && cnt < 4) {
        int digit = nums % 10;  
        arr[cnt] = digit;
        nums /= 10;
        cnt++;
    }
    if (arr[0] != arr[1] &&
        arr[0] != arr[2] &&
        arr[0] != arr[3] &&
        arr[1] != arr[2] &&
        arr[1] != arr[3] &&
        arr[2] != arr[3]) {
        return true;
    }
    return false;
}

int main() {
    pht();
    int year;
    cin >> year;
    for (int i = year + 1;; i++) { 
        if (fourSlice(i)) {
            cout << i << '\n';
            break;
        }
    }
    return 0;
}
