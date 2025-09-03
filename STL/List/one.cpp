#include <bits/stdc++.h>
using namespace std;
int main() {
    list <char> name;
    name.push_back('P');    
    name.push_back('a');   
    name.push_back('r');
    name.push_back('v');    
    name.push_back('e');    
    name.push_back('j');
    name.push_front(' ');
    name.push_front('d');
    name.push_front('M');
    // list <char>::iterator printer;
    // for(printer = name.begin(); printer != name.end(); printer++) {
    //     cout << *printer;
    // }
    for(auto it: name) {
        cout << it;
    }
    cout << endl;
    // cout << name.front() << endl;
    // cout << name.back() << endl;
    cout << "The Size of List: " << name.size() << endl;
    name.clear();
    cout << "Cleared" << endl;
    (name.empty()) ? cout << "Nothing have" : cout << "Have value"; 
    cout << endl;
    name.insert(name.begin(), 'P');
    // cout << name.begin() << endl;
    for(auto it: name) {
        cout << it;
    }
    cout << endl;
    return 0;
}