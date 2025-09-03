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
    // list <char>::iterator printer;
    // for(printer = name.begin(); printer != name.end(); printer++) {
    //     cout << *printer;
    // }
    for(auto it: name) {
        cout << it;
    }
    cout << endl;
    return 0;
}