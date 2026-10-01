#include <bits/stdc++.h>
using namespace std;
#define ll long long
const unsigned long long ull = 1;
#define get_bit(x, i) ((x >> i) & ull)
#define set_bit(x, i) (x |= (ull << i))
#define reset_bit(x, i) ( x &= ~(ull << i))
#define flip_bit(x, i) (x ^= (ull << i))

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int q;
    cin >> q;
    unsigned ll x = 0;
    while(q--) {
        int command, value;
        cin >> command;
        if (command >= 0 && command <= 3) {
            cin >> value;
            if (command == 0) {
                get_bit(x, value) == 1 ? cout << 1 << "\n" : cout << 0 << "\n"; 
            } else if (command == 1) {
                set_bit(x, value);
            } else if (command == 2) {
                reset_bit(x, value);
            } else if (command == 3) {
                flip_bit(x, value);
            }
        } else if (command == 4) {
            x == ULLONG_MAX ? cout << 1 << "\n" : cout << 0 << "\n";
        } else if (command == 5) {
            x == 0 ? cout << 0 << "\n" : cout << 1 << "\n";
        } else if (command == 6) {
            x == 0 ? cout << 1 << "\n" : cout << 0 << "\n";
        } else if (command == 7) {
            int cnt = 0;
            for(int i = 0; i < 64; i++) {
                if (get_bit(x, i) == 1) cnt++;
            }
            cout << cnt << "\n";
        } else if (command == 8) {
            cout << x << "\n";
        }
    }
    return 0;
}