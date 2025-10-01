#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, ans = 0;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s; 
        for (int j = 0; j < m; j++) {
            a[i][j] = s[j] - '0';
        }
    }
    map<int, int> freq;

    for (int i = 0; i < m; i++) {
        int mx = a[0][i];
        for (int j = 1; j < n; j++) {
            mx = max(mx, a[j][i]);
        }
        for (int j = 0; j < n; j++) {
            if (a[j][i] == mx) {
                freq[j]++;
            }
        }
    }

    for (auto it = freq.begin(); it != freq.end(); it++) {
        if (it->second >= 1) ans++;
    }
    cout << ans << endl;
}
