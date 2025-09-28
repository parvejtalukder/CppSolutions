#include <bits/stdc++.h>
using namespace std;
int main() {
    // priority_queue <int> pQ;
    priority_queue <int> pQ;
    pQ.push(343);
    pQ.push(43);
    pQ.push(34);
    pQ.push(343);
    pQ.push(3434);
    pQ.push(343);
    pQ.push(3434);
    pQ.push(545);
    pQ.push(454);
    while(!pQ.empty()) {
        cout << pQ.top() << endl;
        pQ.pop();
    }
    return 0;
}