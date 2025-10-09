// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/O
 
#include <bits/stdc++.h>
using namespace std;

bool isPalin(int num);
bool isPrime(long long num);
int maxNum(int arr[], int size);
int minNum(int arr[], int size);
int countPrime(int arr[], int size);
int countPalin(int arr[], int size);
int maxNumDivisors(int arr[], int size);
int divisorsCount(int num, int arr[], int size);

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
 
int main() {
    pht();
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << maxNum(arr, size) << endl;
    cout << minNum(arr, size) << endl;
    cout << countPrime(arr, size) << endl;
    cout << countPalin(arr, size) << endl;
    cout << maxNumDivisors(arr, size) << endl;
    return 0;
}

int maxNum(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if (arr[i] >= max) {
            max = arr[i];
        }
    }
    return max;
}

int minNum(int arr[], int size) {
    int min = arr[0]; 
    for(int i = 1; i < size; i++) {
        if (min >= arr[i]) {
            min = arr[i];
        }
    }
    return min;
}

int countPrime(int arr[], int size) {
    int cnt = 0;
    for(int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            cnt++;
        }
    }
    return cnt;
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

int countPalin(int arr[], int size) {
    int cnt = 0;
    for(int i = 0; i < size; i++) {
        if (isPalin(arr[i])) {
            cnt++;
        }
    }
    return cnt;
}

bool isPalin(int num) {
    if (num <= 9) {
        return true;
    } else {
        bool isSame = 0;
        vector <int> arr;
        while(num > 0) {
            int one = num % 10;
            arr.push_back(one);
            num /= 10;
        }
        vector <int> one(arr.begin(), arr.end());
        for(int i = 0; i < arr.size(); i++) {
            if (one[i] == arr[i]) {
                isSame = true;
            } else {
                isSame = false;
            }
        }
        if (isSame) {
            return true;
        } else {
            return false;
        }
    }
}

int maxNumDivisors(int arr[], int size) {
    int max = divisorsCount(arr[0], arr, size);
    for(int i = 1; i < size; i++) {
        if (divisorsCount(arr[i], arr, size) >= max) {
            max = arr[i];
        } 
    }
    return max;
}

int divisorsCount(int num, int arr[], int size) {
    int cnt = 0;
    for(int i = 0; i < size; i++) {
        if (num % arr[i] == 0) {
            cnt++;
        }
    }
    return cnt;
}