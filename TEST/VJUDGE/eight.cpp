#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    vector<int> nums;
    nums.push_back(x);
    nums.push_back(y);
    nums.push_back(z);

    sort(nums.begin(), nums.end());
    
    for(int i = 0; i < 3; i++) {
        cout << nums[i];
        if (i != 2) {
            cout << " "; 
        }
    }
    cout << endl;

    return 0;
}