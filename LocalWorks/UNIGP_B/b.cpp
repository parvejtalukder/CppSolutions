#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main () {
    pht();
    int testCase;
    cin >> testCase;
    int counting = 0;
    while(testCase--) {
        int start, end;
        cin >> start;
        cin >> end;
        int sumOf = 0;
        for(int i = start; i <= end; i++) {
            if (i % 2 != 0) {
                sumOf+=i;
            }
        }
        cout << "Case " << ++counting << ": " << sumOf << endl;
    }
    return 0;
}