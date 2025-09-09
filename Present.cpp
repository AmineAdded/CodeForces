#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> res(n+1);
    for (int i = 1; i <= n; i++) {
        int pi;
        cin >> pi;
        res[pi] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << res[i] << " ";
    }
    return 0;
}
