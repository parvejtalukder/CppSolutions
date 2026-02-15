// /* https://vjudge.net/problem/uva-10282 */
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    map <string, string> tran;
    string line; while(getline(cin, line)) {
        if (line.size() == 0) continue;
        else if (find(line.begin(), line.end(), ' ') != line.end()) {
            string word; vector <string> arrW;
            stringstream getStr(line);
            while(getStr >> word) {
                arrW.push_back(word);
            }
            tran[arrW[1]] = arrW[0];
        } else {
            // cout << line << "\n";
            if (!tran[line].empty()) {
            cout << tran[line] << "\n"; 
            } else {
                cout << "eh" << "\n";
            }
        }
        // cout << line << "\n";
        // if (line.find(' ') == string::npos) {
        //     string word;
        //     vector <string> wordFrm;
        //     string wordTo = line; 
        //     stringstream getStr(wordTo);
        //     while(getStr >> word) {
        //         wordFrm.push_back(word);
        //     }
        //     tran[wordFrm[0]] = wordFrm[1];
        // } else {
        //     cout << tran[line] << "\n";
        // }
    }
    return 0;
}