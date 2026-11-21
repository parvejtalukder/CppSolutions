#include <bits/stdc++.h>
using namespace std;

int main() {
 int n;
 cin>>n;
 string S;
 cin>>S;
 int t;
 cin>>t;
 while(t--){
    string B;
    cin>>B;
int j=0;  
 for(int i=0;i<n;i++){
    if(S[i]==B[j]){
        j++;
    }
 else{
    continue;
 }
 if(j == B.size()) break;
 }
 if(j == B.size()) cout<<"YES/n";
 else cout<<"NO/n";

 }
    
    return 0;
}