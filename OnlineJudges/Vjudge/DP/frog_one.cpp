// https://vjudge.net/contest/808287#problem/A
#include <bits/stdc++.h>
using namespace std;
 
void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 
}
 
#include <bits/stdc++.h>
using namespace std;

int main() {
    pht();
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long sum = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'V') {
            sum += 5;
        } else if (s[i] == 'W') {
            sum += 2;
        } else if (s[i] == 'X') {
            if (i + 1 < s.size()) {
                s.erase(i + 1, 1);  
            }
        } else if (s[i] == 'Y') {
            if (i + 1 < s.size()) {
                char c = s[i + 1];
                s.erase(i + 1, 1);
                s.push_back(c);   
            }
        } else if (s[i] == 'Z') {
            if (i + 1 < s.size()) {
                if (s[i + 1] == 'V') {
                    sum /= 5;
                    s.erase(i + 1, 1);
                } else if (s[i + 1] == 'W') {
                    sum /= 2;
                    s.erase(i + 1, 1);
                }
            }
        }
    }
    cout << sum << '\n';
}