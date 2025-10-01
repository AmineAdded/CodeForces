#include<bits/stdc++.h>
using namespace std;

int main() {
    string email, ans;
    cin >> email;
    
    int pos = 0;
    bool atFound = false;
    
    while (pos < email.length()) {
        if (!atFound && email.substr(pos, 2) == "at" && pos > 0 && pos < email.length() - 2) {
            ans += '@';
            atFound = true;
            pos += 2; 
        } 
        else if (email.substr(pos, 3) == "dot" && pos > 0 && pos < email.length() - 3) {
            ans += '.';
            pos += 3; 
        } 
        else {
            ans += email[pos];
            pos++;
        }
    }
    
    cout << ans << endl;
    return 0;
}
