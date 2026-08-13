#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char,int> mp;
    string s;
    vector<int> a(5);
    for(int i=1;i<=4;i++){
        cin >> a[i];
        mp[i+'0'] = 0;
    }
    cin >> s;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    int count = 0;
    
    for(int i=1;i<=4;i++){
        count+=mp[i+'0']*a[i];
    }
    cout << count << endl;
}