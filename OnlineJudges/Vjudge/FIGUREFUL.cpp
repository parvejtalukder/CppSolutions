/*https://vjudge.net/problem/spoj-acmceg2b*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int number_of_figures;
    cin >> number_of_figures;
    map <pair<int, int>, string> codes;
    for(int i = 0; i < number_of_figures; i++) {
        int a, b;
        string na;
        cin >> a >> b >> na;
        codes[make_pair(a, b)] = na;
    }
    int number_of_queries;
    cin >> number_of_queries;
    for(int i = 0; i < number_of_queries; i++) {
        int x, y;
        cin >> x >> y;
        cout << codes[{x, y}] << "\n";
    }
    return 0;
}