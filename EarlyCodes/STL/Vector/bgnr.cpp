#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, sum = 0;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        sum += num[i];
    }
    cout << "Vector Checking After Input:\n";
    for (int i = 0; i < n; i++) {
        cout << num[i] << (i != n - 1 ? " " : "\n");
    }
    cout << "Sum of Values Print: " << sum << "\n";
    auto mxVal = max_element(num.begin(), num.end());
    cout << "Max Number: " << *mxVal << "\n";
    cout << "Reversed\n";
    for (int i = n - 1; i >= 0; i--) {
        cout << num[i] << (i != 0 ? " " : "\n");
    }
    num.push_back(5);
    num.insert(num.begin() + 2, 3);
    cout << "Vector After Adding New:\n";
    for (int i = 0; i < num.size(); i++) {
        cout << num[i] << (i != num.size() - 1 ? " " : "\n");
    }
    // Sort and remove duplicates properly
    sort(num.begin(), num.end());
    auto last = unique(num.begin(), num.end());
    num.erase(last, num.end());
    cout << "Vector as Unique:\n";
    for (int val : num) {
        cout << val << " ";
    }
    cout << "\n";
    cout << "What Index Do You Looking For:\n";
    int sv;
    cin >> sv;
    bool found = binary_search(num.begin(), num.end(), sv);
    cout << (found ? "Yes" : "No") << "\n";
    return 0;
}
