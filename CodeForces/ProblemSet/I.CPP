#include <bits/stdc++.h>
using namespace std;

void CH() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

// bool isBigCurr(vector <int> arr, int num, int indx) {
//     int isBig = 0;
//     for(int i = 0; i < indx; i++) {
//         if (arr[i] < num) {
//             // isBig = true;
//             isBig++;
//         }
//     }
//     if (isBig == indx) {
//         return true;
//     } else {
//         return false;
//     }
// }

// bool isSmallCurr(vector <int> arr, int num, int indx) {
//     int isSmall = 0, cnt = 0;
//     for(int i = indx; i < arr.size(); i++) {
//         if (arr[i] > num) {
//             // isBig = true;
//             isSmall++;
//         }
//         cnt++;
//     }
//     if (isSmall == cnt) {
//         return true;
//     } else {
//         return false;
//     }
// }

int main() {
    CH();
    int tCase;
    cin >> tCase;
    for(int p = 1; p <= tCase; p++) {
        long long size;
        cin >> size;
        int currNum = 0;
        vector <long long> arr(size);
        vector <long long> isBigCurr(size);
        vector <long long> isSmallCurr(size);
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        // int bigCurr = arr[0];
        isBigCurr[0] = arr[0];
        for(int i = 1; i < size; i++) {
            if (isBigCurr[i - 1] > arr[i]) {
                isBigCurr[i] = isBigCurr[i - 1];
            } else {
                isBigCurr[i] = arr[i];
            }
        }
        // int smallCurr = arr[0];
        isSmallCurr[size - 1] = arr[size - 1]; 
        for (int i = size - 2; i >= 0; i--) {
            if (arr[i] < isSmallCurr[i + 1]) {
                isSmallCurr[i] = arr[i];
            } else {
                isSmallCurr[i] = isSmallCurr[i + 1];
            }
        }
        bool notFound = true;
        for(int i = 0; i < size; i++) {
            if (arr[i] > isBigCurr[i - 1] && arr[i] < isSmallCurr[i + 1]) {
                cout << "Case " << p << ": " << i + 1 << "\n";
                notFound = false;
                break;
            }
        }
        // bool notFound = false;
        // // bool isBig = true, isSmall = true;
        // for(int i = 0; i < size; i++) {
        //     if (isBigCurr(arr, arr[i], i) == true && isSmallCurr(arr, arr[i], i) ==) {
        //         // cout << i + 1 << "\n";
        //         currNum = i + 1;
        //         notFound = false;
        //         break;
        //     } else {
        //         notFound = true;
        //     }
        // }
        if (notFound) {
            cout << "Case " << p << ": " << "Humanity is doomed!" << "\n";
        }
    }
    return 0;
}