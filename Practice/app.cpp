#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int n, cnt = 0;
    cin >> n;
    string str;
    cin >> str; 
    int siz = str.size();
    for(int i = 0; i < siz; i++) {
        int lst = str[i] - '0';
        if (lst % 2 == 0) cnt += (1 + i); 
        // for(int j = i; j < siz; j++) {
        //     int lst = str[j] - '0';
        //     if (lst % 2 == 0) {
        //         cnt++;
        //     }
        // }
    }
    cout << cnt << "\n";
    return 0;
}
