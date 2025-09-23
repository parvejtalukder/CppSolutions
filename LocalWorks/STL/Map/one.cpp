#include <bits/stdc++.h>
using namespace std;

int main() {

    map <int, string> infotable;

    infotable[48007] = "Raiyan";
    infotable.insert(make_pair(48001, "Shakib"));
    infotable[48002] = "Parvej";
    infotable[48003] = "Emran";
    infotable[48005] = "Mahfuz";

    for(auto &value: infotable) {
        cout << value.first << " " << value.second << endl;
    }

    infotable.clear();
    if (infotable.empty()) {
        cout << "Its empty now" << endl;
    }

    return 0;
}
