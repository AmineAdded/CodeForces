#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));
    vector<int> rowSum(n, 0), colSum(n, 0);

    // Lire la matrice et calculer les sommes en même temps
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            rowSum[i] += a[i][j];
            colSum[j] += a[i][j];
        }
    }

    int count = 0;
    // Vérifier chaque case individuellement
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (colSum[j] > rowSum[i]) count++;
        }
    }

    cout << count << endl;
    return 0;
}
