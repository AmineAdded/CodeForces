#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    cin >> p >> n;
    vector<int> x(n);
    for(int i=0;i<n;i++) cin >> x[i];
    map<int,int> mp;
    
    for(int i=0;i<p;i++) mp[i] = 0;
    int i=0;
    while(i<n){
        int h = x[i]%p;
        mp[h]++;
        if(mp[h] > 1) {
            cout << i+1 << endl;
            return 0;
        }
        i++;
    }
    cout << -1 << endl;
}