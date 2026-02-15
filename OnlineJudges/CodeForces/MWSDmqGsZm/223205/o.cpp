#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int maxNum(int arr[], int size) {
    int maxVal = arr[0];
    for(int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int minNum(int arr[], int size) {
    int minVal = arr[0];
    for(int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

bool isPrime(long num) {
    if (num <= 1) return false;
    for(int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int countPrime(int arr[], int size) {
    int cnt = 0;
    for(int i = 0; i < size; i++) {
        if (isPrime(arr[i])) cnt++;
    }
    return cnt;
}

bool isPalin(int n) {
    if (n < 0) return false;

    int original = n;
    int reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

int countPalin(int arr[], int size) {
    int cnt = 0;
    for(int i = 0; i < size; i++) {
        if (isPalin(arr[i])) cnt++;
    }
    return cnt;
}

int divisorsCount(int num) {
    int cnt = 0;
    for(int i = 1; i <= num; i++) {
        if (num % i == 0) cnt++;
    }
    return cnt;
}

int maxNumDivisors(int arr[], int size) {
    int maxCnt = -1;
    int maxNum = -1;
    for(int i = 0; i < size; i++) {
        int Cnt = divisorsCount(arr[i]);
        if(Cnt > maxCnt || (Cnt == maxCnt && arr[i] > maxNum)) {
            maxCnt = Cnt;
            maxNum = arr[i];
        }
    }
    return maxNum;
}

int main() {
    pht();
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++) cin >> arr[i];

    cout << "The maximum number : " << maxNum(arr, size) << "\n";
    cout << "The minimum number : " << minNum(arr, size) << "\n";
    cout << "The number of prime numbers : " << countPrime(arr, size) << "\n";
    cout << "The number of palindrome numbers : " << countPalin(arr, size) << "\n";
    cout << "The number that has the maximum number of divisors : " << maxNumDivisors(arr, size) << "\n";

    return 0;
}
