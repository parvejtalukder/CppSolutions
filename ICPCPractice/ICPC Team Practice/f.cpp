#include <bits/stdc++.h>
using namespace std;

vector <long long> resArr;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void ansPrint() {
    cout << "Ans Recieved" << "\n";
    for(auto it: resArr) {
        cout << it << " ";
    }
}

void Tree(long long it, vector <long long>& arrOne, vector <long long>& arrTwo) {
    cout << "void Tree Recived" << "\n";
    if (arrOne.size() < it) {
        cout << "void tree end" << "\n";
        return;
    }
    resArr.push_back(arrTwo[it]);
    cout << resArr[it] << " ";
    arrOne.erase(arrOne.begin() + arrTwo[it] + 1);
    Tree(it + 1, arrOne, arrTwo);
}

int main() {
    pht();
    long long n;
    cin >> n;
    n+=1;
    vector <long long> arrOne(n);
    vector <long long> arrTwo(n);
    cout << "started to take input \n";
    for(long long i = 1; i < n + 2; i++) {
        cin >> arrOne[i];
    }
    for(long long i = 1; i < n + 2; i++) {
        cin >> arrTwo[i];
    }
    for(long long i = 1; i < n + 2; i++) {
        cout << arrTwo[i] << " ";
    }
    cout << "Send to void Tree" << "\n";
    // Tree(1, arrOne, arrTwo);
    cout << "back from the void Tree and to ans" << "\n";
    // ansPrint();
    return 0;
}