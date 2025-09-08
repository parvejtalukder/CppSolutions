#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long testCase;
    cin >> testCase;
    cin.ignore(); 
    while(testCase--) {
        string number;
        getline(cin, number);
        long long count = 0;
        for(int i = 0; i < number.size(); i++) {
            if (number[i] == ' ' && number[i + 1] != ' ') {
                count++;
            }
        }
        cout << count + 1<< endl;
    }
    return 0;
}