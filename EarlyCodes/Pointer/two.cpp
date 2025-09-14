#include <bits/stdc++.h>
using namespace std;

void pht() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main () {
   pht();
   int  var = 20;   
   int  *ip;         
   ip = &var;       
   cout << "Value of var variable: ";
   cout << var << endl;
   cout << "Address stored in ip variable: ";
   cout << ip << endl;
   cout << "Value of *ip variable: ";
   cout << *ip << endl;
   return 0;
}