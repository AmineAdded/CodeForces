#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char a[100][100];
    int b[6], c = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == '*') {
                b[c++] = i;
                b[c++] = j;
            }
        }
    }

    int x, y;

    // Trouver la ligne manquante
    if (b[0] == b[2])      x = b[4];
    else if (b[0] == b[4]) x = b[2];
    else                   x = b[0];

    // Trouver la colonne manquante
    if (b[1] == b[3])      y = b[5];
    else if (b[1] == b[5]) y = b[3];
    else                   y = b[1];

    cout << x + 1 << " " << y + 1 << endl;
    return 0;
}
