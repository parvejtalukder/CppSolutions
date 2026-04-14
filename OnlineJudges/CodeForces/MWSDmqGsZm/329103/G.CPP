#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int testCase;
    cin >> testCase;
    while(testCase--) {
        int arrSize;
        cin >> arrSize;
        vector <int> arrOf;
        while(arrSize--) {
            int tempNum;
            cin >> tempNum;
            arrOf.push_back(tempNum);
        }
        // for(auto one: arrOf) {
        //     cout << one << "\n";
        // }
        if (arrOf.size() % 2 != 0) {
            cout << -1 << "\n";
            continue;
        }
        int evenCnt = 0;
        int oddCnt = 0;
        for(auto currNum: arrOf) {
            if (currNum % 2 == 0) {
                evenCnt++;
            } else {
                oddCnt++;
            }
        }
        cout << abs(evenCnt - oddCnt)/2 << "\n";
    }
    return 0;
}