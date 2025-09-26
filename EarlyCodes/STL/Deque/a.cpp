#include <bits/stdc++.h>
using namespace std;
int main() {
    deque <int> One = {1, 2, 3, 4, 5, 6, 7, 8};
    One.pop_front();
    One.pop_back();
    One.at(3);
    One.emplace_back(3);
    for(int one: One) {
        cout << one << endl;
    }
    cout << One[One.size() - 1] << endl;
    return 0;
}