#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> myVec;
    myVec.push_back(5);
    myVec.push_back(3);
    myVec.push_back(6);
    myVec.push_back(2);
    myVec.push_back(1);

    for(int vec: myVec) {
        cout << vec << endl;
    }

    cout << myVec.at(3) << endl;

    vector <char> charVec;
    charVec.push_back('a');
    charVec.push_back('b');
    charVec.push_back('c');
    charVec.push_back('e');
    charVec.insert(charVec.begin() + 3, 'd');
    
    for(char charr: charVec) {
        cout << charr << " ";
    } 
    cout << endl;

    cout << charVec.at(3) << endl;

    cout << myVec.size() << " " << charVec.size() << endl;

    myVec.pop_back();
    charVec.pop_back();

    myVec.erase(find(myVec.begin(), myVec.end(), 2));
    for(int vec: myVec) {
        cout << vec << endl;
    }

    return 0;
}