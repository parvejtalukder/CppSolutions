// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F

#include <bits/stdc++.h>
using namespace std;

vector <long long> MyList;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void toPrint(long long arr[], int indx, int len) {
    if (indx == len) return;
    toPrint(arr, indx + 1, len);       
    if (indx % 2 == 0) {               
        cout << arr[indx] << " ";
    }
}

int main() {
    pht();
    int sizeArr;
    cin >> sizeArr;
    long long arrOf[sizeArr];
    // vector <long long> MyList;
    for(int i = 0; i < sizeArr; i++) {
        cin >> arrOf[i];
    }
    toPrint(arrOf, 0, sizeArr);
    cout << endl;
    return 0;
}