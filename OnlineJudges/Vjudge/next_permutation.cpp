// https://vjudge.net/problem/hdu-3283

#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    pht();
    int p;
    cin >> p;
    while(p--) {
        cin.ignore();
        string str;
        getline(cin, str);

        string ptwo;
        int num_st = 0;
        bool num_go = false;
        int one_l = str.size();

        for(int i = 0; i < one_l; i++) {
            if (str[i] == ' ') {
                num_go = true;
                num_st = i;
                break;
            }
        }

        for(int i = num_st + 1; i < one_l; i++) {
            ptwo.push_back(str[i]);
        }

        int num = stoi(ptwo);
        // int num_arr(ptwo.size());
        vector <int> arr;
        while(num > 0) {
            int ld = num % 10;
            arr.push_back(ld);
            num /= 10;
        }
        // vector <int> ann(arr);
        next_permutation(arr.begin(), arr.end());
        for(int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        // cout << () << "\n";
        // if ()
        // cout << num / 2 << "\n";
        // cout << ptwo << "\n";
    }
    return 0;
}
