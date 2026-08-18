#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[i+1] = 0;
    }
    int p,q;
    cin >> p;
    for(int i=0;i<p;i++){
        int a;
        cin >> a;
        mp[a]++;
    }
    cin >> q;
    for(int i=0;i<q;i++){
        int a;
        cin >> a;
        mp[a]++;
    }
    for(int i=0;i<n;i++){
        if(mp[i+1] == 0){
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
}