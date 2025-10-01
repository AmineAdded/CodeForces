#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    int count = 0;
    int mn = a[0], mx = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > mx) {    
            count++;
            mx = a[i];
        } 
        else if (a[i] < mn) { 
            count++;
            mn = a[i];
        }
    }

    cout << count << endl;
    return 0;
}
