#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int i = 0;
    while (i < n - 1) {
        bool moved = false;
        for (int jump = k; jump >= 1; jump--) {
            if (i + jump < n && s[i + jump] == '.') {
                i += jump;
                moved = true;
                break;
            }
        }
        if (!moved) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
