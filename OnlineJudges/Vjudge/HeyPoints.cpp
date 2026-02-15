/*https://vjudge.net/problem/uva-10295*/
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int words, desc;
    cin >> words >> desc;
    // cin.ignore();
    map <string, int> words_values;
    for(int i = 0; i < words; i++) {
        string word; int val;
        cin >> word >> val;
        words_values[word] = val;
    }
    // int desc = 2;
    cin.ignore();
    while(desc--) {
        string wor;
        string desc_full, line;
        while (getline(cin, line)) {
            if (line == ".") {   
                // cout << desc_full << "\n";
                break;
            } else {
                desc_full += line + "\n";  
            }
        }
        int theVal = 0;
        stringstream ss(desc_full);
        while(ss >> wor) {
            theVal += words_values[wor];
            // if(words_values[wor])
        }
        cout << theVal << "\n";
    }
    return 0;
}