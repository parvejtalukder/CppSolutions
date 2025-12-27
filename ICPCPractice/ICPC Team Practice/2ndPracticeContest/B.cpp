#include <bits/stdc++.h>
using namespace std;

int RobotOnX(int value);
int instractionFromNumber(string instraction, int value);

void CodeHive() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

vector <string> instractions;

int instractionFromNumber(string instraction, int value) {
    int indx;
    string numberInString = "0"; 
    for(int i = 0; i < instraction.size(); i++) {
        if (instraction[i] >= '0' && instraction[i] <= '9') {
            numberInString += instraction[i];
        }
    }
    indx = stoi(numberInString);
    if (indx >= instractions.size() || indx < 0) {
        return value;
    }
    // int indx = instractionFromNumber(instractions[i]);
    if (instractions[indx] == "LEFT") {
        value--;
    } else if (instractions[indx] == "RIGHT") {
        value++;
    } else {
        value = instractionFromNumber(instractions[indx], value);
    }
    return value;
}

int RobotOnX(int value) {
    for(int i = 0; i < instractions.size(); i++) {
        if (instractions[i] == "LEFT") {
            value--;
        } else if (instractions[i] == "RIGHT") {
            value++;
        } else {
            value = instractionFromNumber(instractions[i], value);
        }
    }
    return value;
}

int main() {
    CodeHive();
    int testCase;
    cin >> testCase;
    while(testCase--) {
        int value = 0;
        int instractionNumbers;
        cin >> instractionNumbers;
        instractions.clear(); cin.ignore(); 
        for(int i = 0; i < instractionNumbers; i++) {
            string instraction;
            getline(cin, instraction);
            instractions.push_back(instraction);
        }
        cout << RobotOnX(value) << endl;
        // for(int i = 0; i < instractionNumbers; i++) {
        //     cout << instractions[i] << "\n";
        // }
    }
    return 0;
}