#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int size;
    cin >> size;
    cin.ignore();
    long long sum = 0;
    while(size--) {
        string name;
        cin >> name;
        if (name == "Tetrahedron") {
            sum += 4;
        } else if (name == "Cube") {
            sum += 6;
        } else if (name == "Octahedron") {
            sum += 8;
        } else if (name == "Dodecahedron") {
            sum += 12;
        } else {
            sum += 20;
        }
    }
    cout << sum << endl;
    return 0;
}