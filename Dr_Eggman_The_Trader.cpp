#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    string name[15];              // noms des planètes
    int buy[15][105], sell[15][105], qty[15][105]; // tableaux simples

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        for (int j = 0; j < m; j++) {
            cin >> buy[i][j] >> sell[i][j] >> qty[i][j];
        }
    }

    int maxProfit = 0;

    // tester toutes les paires de planètes (achat -> vente)
    for (int p1 = 0; p1 < n; p1++) {
        for (int p2 = 0; p2 < n; p2++) {
            if (p1 == p2) continue;

            int profits[105], counts[105], len = 0;

            // calculer profit pour chaque objet
            for (int j = 0; j < m; j++) {
                int profit = sell[p2][j] - buy[p1][j];
                if (profit > 0 && qty[p1][j] > 0) {
                    profits[len] = profit;
                    counts[len] = qty[p1][j];
                    len++;
                }
            }

            // trier par profit décroissant
            for (int a = 0; a < len; a++) {
                for (int b = a + 1; b < len; b++) {
                    if (profits[b] > profits[a]) {
                        swap(profits[a], profits[b]);
                        swap(counts[a], counts[b]);
                    }
                }
            }

            int cap = k, total = 0;
            for (int i = 0; i < len && cap > 0; i++) {
                int take = min(cap, counts[i]);
                total += take * profits[i];
                cap -= take;
            }

            if (total > maxProfit) maxProfit = total;
        }
    }

    cout << maxProfit << "\n";
    return 0;
}
