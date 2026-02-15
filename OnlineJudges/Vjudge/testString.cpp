#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    string desc_full, line;

    while (getline(cin, line)) {
        if (line == ".") {   
            break;
        } else {
            desc_full += line + "\n";  
        }
    }

    

    cout << desc_full;  
    return 0;
}
