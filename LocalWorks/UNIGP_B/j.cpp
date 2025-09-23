#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    pht();
    int row, colm;
    cin >> row >> colm;
    int evn = 0;  
    for (int i = 1; i <= row; i++) {
        if (i % 2 == 0) evn++;  
        for (int j = 1; j <= colm; j++) {
            if (i % 2 == 0) {
                if (evn % 2 == 1) { 
                    if (j != colm)
                        cout << ".";
                    else
                        cout << "#";
                } else {            
                    if (j != 1)
                        cout << ".";
                    else
                        cout << "#";
                }
            } else {
                cout << "#"; 
            }
        }
        cout << '\n';
    }
    return 0;
}
