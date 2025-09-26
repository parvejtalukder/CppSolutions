#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <int> vec;
    vec.push_back(2);
    vec.push_back(23);
    vec.push_back(257);
    vec.push_back(23);
    vec.push_back(23);
    vec.push_back(24);
    vec.push_back(45);
    vec.push_back(265);
    vec.push_back(3);
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    cout << vec[3] << endl << vec.front() << endl;
    vec.erase(vec.begin(), vec.begin()+3);
    cout << vec.size() << endl;
    return 0;
}