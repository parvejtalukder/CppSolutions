#include <bits/stdc++.h>
using namespace std;
int main() {
    queue <int> myQ;
    myQ.push(1);
    myQ.push(2);
    myQ.push(3);
    myQ.push(4);
    myQ.push(5);
    myQ.push(6);
    while(!myQ.empty()) {
        cout << myQ.front() << endl;
        myQ.pop();
    }
    return 0;
}