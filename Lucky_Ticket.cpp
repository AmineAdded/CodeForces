#include <bits/stdc++.h>
using namespace std;

bool checkLucky(const string &s) {
    for (char c : s) {
        if (c != '4' && c != '7') return false;
    }
    return true;
}

bool countFirstHalfAndSecondHalf(const string &s) {
    int n = s.size();
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n/2; i++) sum1 += s[i] - '0';
    for (int i = n/2; i < n; i++) sum2 += s[i] - '0';
    return sum1 == sum2;
}

int main() {
    int n;
    string s;
    cin >> n >> s;

    if (!checkLucky(s)) {
        cout << "NO\n";
        return 0;
    }

    if (countFirstHalfAndSecondHalf(s)) cout << "YES\n";
    else cout << "NO\n";
}
