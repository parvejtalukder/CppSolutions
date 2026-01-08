#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main() {
    pht();
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
            string str, word;
             // cin >> str;
            getline(cin, str);
            stringstream ss(str);
            vector <string> vec;
            while(ss >> word) {
                reverse(word.begin(), word.end());
                vec.push_back(word);
            }
            for(auto w: vec) {
            cout << w << " ";
        }
        cout << "\n";
    }
    return 0;
}