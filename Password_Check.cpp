#include<bits/stdc++.h>
using namespace std;
int main(){
    string password;
    int length=0,large=0,small=0,digit=0;
    cin >> password;
    if (password.length() >= 5) length=1;
    if (password.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") != string::npos) large=1;
    if (password.find_first_of("abcdefghijklmnopqrstuvwxyz") != string::npos) small=1;
    if (password.find_first_of("0123456789") != string::npos) digit=1;

    if(length && large && small && digit) cout << "Correct" << endl;
    else cout << "Too weak" << endl;
}