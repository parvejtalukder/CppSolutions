#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <int> vec(3, 3);
    vector <int>::iterator it;
    int i = 0;
    for(auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}