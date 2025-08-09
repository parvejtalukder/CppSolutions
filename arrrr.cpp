#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    if (n == 1 || n == 2 || n == 3) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    int indxOne = 0, indxTwo = 0;
    int arrOne[n], arrTwo[n];  
    
    for(int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            arrOne[indxOne++] = i;
        }
    }
    for(int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            arrTwo[indxTwo++] = i;
        }
    }
    
    int idxMrg = 0;
    int arrMrg[n * 2];  
    
    for(int i = 0; i < indxOne; i++) {
        arrMrg[idxMrg++] = arrOne[i];
    }
    
    for(int i = 0; i < indxTwo; i++) {
        arrMrg[idxMrg++] = arrTwo[i];
    }

    for(int i = 0; i < idxMrg; i++) {
        cout << arrMrg[i] << " ";
    }
    cout << endl;
    return 0;
}
