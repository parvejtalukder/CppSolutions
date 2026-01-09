#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <iterator>
#include <sstream>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void fifo(int &t) {
    queue <int> q;
    for(int i = 0; i < t; i++) {
        string line;
        getline(cin, line);
        stringstream getl(line);
        string word; int val;
        getl >> word;
        if (word == "IN") {
            getl >> val;
            q.push(val);
        } else if (word == "OUT") {
            if (!q.empty()) {
                cout << q.front() << "\n";
                q.pop();
            } else {
                cout << "None" << "\n";
            }
        }
    }
}
void filo(int &t) {
    stack <int> q;
    for(int i = 0; i < t; i++) {
        string line;
        getline(cin, line);
        stringstream getl(line);
        string word; int val;
        getl >> word;
        if (word == "IN") {
            getl >> val;
            q.push(val);
        } else if (word == "OUT") {
            if (!q.empty()) {
                cout << q.top() << "\n";
                q.pop();
            } else {
                cout << "None" << "\n";
            }
        }
    }
}

int main() {
    pht();
    int test_case;
    cin >> test_case;
    while(test_case--) {
        int num; string com;
        cin >> num >> com;
        cin.ignore();
        if (com == "FIFO") {
            fifo(num);
        } else if (com == "FILO") {
            filo(num);
        }
    }
    return 0;
}