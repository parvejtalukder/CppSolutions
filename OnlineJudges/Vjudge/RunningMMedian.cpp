// https://vjudge.net/contest/786209#problem/F
#include <bits/stdc++.h>
using namespace std;

multiset <int> one;
multiset <int> two;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// 5 > 4 + 1
void runningMedian() {
    if (one.size() > two.size() + 1) {
        auto last = one.end();
        last--;
        two.insert(*last);
        one.erase(last);
    } else if (two.size() > one.size()) {
        auto fist = two.begin();
        one.insert(*fist);
        two.erase(fist);
    }
    if ((one.size() + two.size()) % 2 == 0) {
        cout << fixed << setprecision(1) <<  (*one.rbegin() + *two.begin())/2.0 << "\n";
    } else {
        cout << fixed << setprecision(1) << *one.rbegin() << "\n";
    }
}

int main() {
    pht();
    int n;
    cin >> n;
    while(n--) {
        int num;
        cin >> num;
        if (one.empty() || num <= *one.rbegin()) {
            one.insert(num);
        } else {
            two.insert(num);
        }
        runningMedian();
    }
    return 0;
}