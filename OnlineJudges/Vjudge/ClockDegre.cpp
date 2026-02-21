//vjudge.net/contest/790915#problem/C
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;
int arr[N];

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool answer(int mindis,int pos, int cows) {
    int cowput = 1;
    int nowin = arr[0];
    for(int i = 1; i < pos; i++) {
        if ((arr[i] - nowin) >= mindis) {
            cowput++;
            nowin = arr[i];
            if (cowput == cows) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    pht();
    int t;
    cin >> t;
    while(t--) {
        int pos, cows;
        cin >> pos >> cows;
        for(int i = 0; i < pos; i++) {
            cin >> arr[i];
        }
        // for(int i = 0; i < pos; i++) {
        //     for(int j = 0; j < pos - 1; j++) {
        //         if (arr[j] > arr[j + 1]) {
        //             swap(arr[j], arr[j + 1]);
        //         }
        //     }
        // }
        sort(arr, arr + pos);
        int ans = 0; 
        int from = 0;
        int to = arr[pos - 1] - arr[0];
        while(from <= to) {
            int mindis = (from + to)/2;
            if (answer(mindis, pos, cows)) {
                ans = mindis;
                from = mindis + 1;
            } else {
                to = mindis - 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}