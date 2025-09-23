#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int howManyName;
    cin >> howManyName;
    set<string> nameUnique; 
    for(int i = 0; i < howManyName; i++) {
        string theName;
        cin >> theName;
        if(nameUnique.count(theName)) { 
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
            nameUnique.insert(theName); 
        }
    }
    return 0;
}