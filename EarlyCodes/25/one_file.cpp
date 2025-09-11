#include <bits/stdc++.h>
using namespace std;
int main() {
    string nameOf, print;
    fstream myData("data.txt", ios::in | ios::out | ios::trunc);
    if (!myData) {
        cout << "Error opening file\n";
        return 1;
    }
    getline(cin, nameOf);
    myData << nameOf << endl;
    myData.seekg(0);
    if (getline(myData, print)) {
        cout << print << endl;
    }
    return 0;
}
