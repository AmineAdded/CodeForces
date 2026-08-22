#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <int,vector<int>> mp;
    mp[1] = {};
    mp[2] = {};
    mp[3] = {};
    vector <int> t(n);
    for(int i=0;i<n;i++) {
        cin >> t[i]; 
        mp[t[i]].push_back(i+1);
    }
    int w = 5001;

    for (auto &p : mp) {
        w = min(w, (int)p.second.size());
        if(p.second.size() == 0){
            cout << 0 << endl;
            return 0;
        }
    }
    cout << w << endl;
    for(int i=0;i<w;i++){
        for (auto &p : mp){
            cout << p.second[i] << " ";
        }
        cout << endl;
    }

}