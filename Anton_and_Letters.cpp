#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    getline(cin, s);
    map <char,int> mp;
    for(int i=0;i<26;i++){
        mp[alphabet[i]] = 0;
    }
    for(int i=0;i<s.length();i++){
        for(int j=0;j<26;j++){
            if(s[i] == alphabet[j]) mp[alphabet[j]]++;
        }
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(mp[alphabet[i]] > 0) count++;
    }
    cout << count << endl;
}