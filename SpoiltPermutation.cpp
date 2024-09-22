#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a, l = 0, r = 0;
    int T[1001];
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> T[i];
    }
    
    for (int i = 1; i <= n; i++) {
        if (T[i] != i) {
            if (l == 0) {
                l = i;
            }
            r = i;
        }
    }
   
    if (l == 0) {
        cout << "0 0";
        return 0;
    }

    for (int i = l, j = r; i <= r; i++, j--) {
        if (T[i] != j) {
            cout << "0 0";
            return 0;
        }
    }
 
    cout << l << " " << r;
    
    return 0;
}
