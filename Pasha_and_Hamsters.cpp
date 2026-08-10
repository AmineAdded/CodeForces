#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,a,b;
    cin >> n >> a >> b;
    vector <int> v(a);
    vector <int> w(b);
    for(int i=0;i<a;i++){
        cin >> v[i];
    }
    for(int i=0;i<b;i++){
        cin >> w[i];
    }
    sort(v.begin(),v.end());
    sort(w.begin(),w.end());

    map <int,int> mp;
    for(int i=1;i<=n;i++){
        mp[i] = 0;
    }
    
    for(int i=0;i<a;i++){
        mp[v[i]] = 1;
    }

    for(int i=0;i<b;i++){
        if(mp[w[i]] == 0) mp[w[i]] = 2;
    }
    for(int i=1;i<=n;i++){
        cout << mp[i] << " ";
    }

}