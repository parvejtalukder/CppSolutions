#include <bits/stdc++.h>
using namespace std;
int main() {
    map <string, int> M;
    M["Parvej"] = 20;
    M["Reduan"]  = 24;
    M.insert({"Rafi", 18});
    cout << M["Parvej"] << endl;
    M.erase("Parvej");
    cout << M.size() << endl;
    M.clear();
    if (M.empty()) {
        cout << "Deleted" << endl;
    }
    cout << M.size() << endl;
    return 0;
}