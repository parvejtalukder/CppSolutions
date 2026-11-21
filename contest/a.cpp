#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    int k=0;
    sort(a.begin(),a.end());
    while(!a.empty() && k<m){
auto it = upper_bound(a.begin(),a.end(),b[k]);
if(it!=a.end()){
    int x = it-a.begin();
    cout << a[x-1] << "/n";
    a.erase(a.begin()+(x-1));
}
else if(it==a.begin()){
    cout << -1 << "/n";
}
else if(it==a.end()){
    cout << a[n-1] << "/n";
    a.erase(a.end());
}
}


    
    return 0;
}