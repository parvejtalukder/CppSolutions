// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
 
#include <bits/stdc++.h>
using namespace std;

vector <int> myNums;
int MinMax(int size) {
    vector <int> sorted(myNums);
    sort(sorted.begin(), sorted.end());
    int min = sorted.at(0);
    int max = sorted.at(size - 1);
    cout << min << " " << max << endl;
    return 0;
}
 
void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
 
int main() {
    pht();
    int sizeOf;
    cin >> sizeOf;
    myNums.resize(sizeOf);
    for(int i = 0; i < sizeOf; i++) {
        cin >> myNums[i];
    }
    MinMax(sizeOf);
    return 0;
}
