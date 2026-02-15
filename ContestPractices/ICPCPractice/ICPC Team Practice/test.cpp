#include <bits/stdc++.h>
using namespace std;

void CodeHive() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    CodeHive();
                string sameAs = "SAME AS PHT 100";
                string numberInString = "";
                for(int i = 0; i < sameAs.size(); i++) {
                    if (sameAs[i] >= '0' && sameAs[i] <= '9') {
                        numberInString.push_back(sameAs[i]);
                    }
                }
                cout << stoi(numberInString) + 5 << endl;
                return 0;
    }