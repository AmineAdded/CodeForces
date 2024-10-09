#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a[100], b[100], c[100], d[100], ans = 0;
    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    for (int section = 1; section <= n; section++) {
        int temp = 1001; 
        int winner = 0;
        int index = m; 

        for (int i = 0; i < m; i++) {
            if (section >= a[i] && section <= b[i]) {
                if (c[i] < temp) {
                    temp = c[i];
                    winner = d[i];
                    index = i;
                } else if (c[i] == temp && i < index) {
                    winner = d[i];
                }
            }
        }
        ans += winner;
    }

    cout << ans << endl;

    return 0;
}
