#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    long long ans2 = s[0].size(); // Longueur max possible du préfixe commun

    for (int i = 1; i < n; i++) {
        int j = 0;
        while (j < ans2 && s[i][j] == s[0][j]) j++; // comparer avec s[0]
        ans2 = j; // mettre à jour la longueur du préfixe commun
    }

    cout << ans2 << endl;
    return 0;
}
