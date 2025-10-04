#include <bits/stdc++.h>
using namespace std;

int main() {
    int press[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> press[i][j];

    int dx[5] = {0, 1, -1, 0, 0};  // mouvements : soi-même, bas, haut, droite, gauche
    int dy[5] = {0, 0, 0, 1, -1};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            int sum = 0;
            for(int k = 0; k < 5; k++) {
                int ni = i + dx[k];
                int nj = j + dy[k];
                if(ni >= 0 && ni < 3 && nj >= 0 && nj < 3)
                    sum += press[ni][nj];
            }
            // allumé au départ -> s’éteint si pressé un nombre impair de fois
            cout << (sum % 2 == 0 ? 1 : 0);
        }
        cout << "\n";
    }
}
