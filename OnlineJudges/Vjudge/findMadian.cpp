#include <bits/stdc++.h>
using namespace std;

int sum = 0;
priority_queue <int> arr_one;
priority_queue <int> arr_two;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void set_value(int value, int i) {
    
    // int s_one = arr_one.size();
    // int s_two = arr_two.size();
    // if (s_one == s_two) {
    //     float ans = sum/(1 + i);
    //     cout << fixed << setprecision(1) << ans << "\n";
    //     auto temp = arr_two.top();
    //     arr_one.push(temp);
    //     arr_two.pop();
    // } 
}

int main() {
    pht();
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        sum += x;
        set_value(x, i);
        if (i == 0) {
            cout << fixed << setprecision(1) << (float)x << "\n";
        }
    }
    return 0;
}