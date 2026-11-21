// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/E
#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    pht();
    long long numberOfRoom;
    cin >> numberOfRoom;
    long long roomAvailable = 0;
    vector <int> PeopleCanLive(numberOfRoom);
    vector <int> PeopleAreOnLive(numberOfRoom);
    for(long long i = 1; i <= numberOfRoom; i++) {
        cin >> PeopleCanLive[i] >> PeopleAreOnLive[i];
        if ((PeopleAreOnLive[i] - PeopleCanLive[i]) >= 2) {
            roomAvailable++;
        }
    }
    cout << roomAvailable << endl;
    return 0;
}