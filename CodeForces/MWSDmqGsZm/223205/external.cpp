//EXTERNAL
 
#include <bits/stdc++.h>
using namespace std;

void theMachine();
 
void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
 
int main() {
    pht();
    int testCase;
    cin >> testCase;
    while(testCase--) {
        theMachine();
    }
    return 0;
}

void theMachine() {
    string fullForm; cin.ignore();
    getline(cin, fullForm);
    vector <char> shortForm;
    shortForm.push_back(fullForm.at(0));
    for(int i = 0; i < fullForm.size(); i++) {
        if (fullForm[i] == ' ') {
            shortForm.push_back(fullForm[i + 1]);
        }
    }
    for(int i = 0; i < shortForm.size(); i++) {
        (i == shortForm.size() - 1) ? cout << shortForm[i] << endl: cout << shortForm[i]; 
    }
}