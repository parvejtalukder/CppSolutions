// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/D
 
#include <bits/stdc++.h>
using namespace std;

void primeMachine();
bool isPrime(long long num);
 
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
        primeMachine();
    }
    return 0;
}

void primeMachine() {
    long long Number;
    cin >> Number;
    (isPrime(Number)) ? cout << "YES": cout << "NO";
    cout << endl;
}

bool isPrime(long long num) {
    if (num <= 1 || (num > 2) && (num % 2 == 0)) {
        return false;
    } else {
        if (num == 2) {
            return true;
        } else {
            long long cnt = 0;
            for(int i = 3; i * i <= num; i += 2) {
                if (num % i == 0) {
                    cnt++;
                }
            }
            if (cnt > 0) {
                return false;
            } else {
                return true;
            }
        }
    }
}