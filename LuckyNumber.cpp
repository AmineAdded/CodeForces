#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, ans = 0, number;
    vector<ll> V;
    cin >> n;
    ans += n;  // Tous les sous-tableaux de longueur 1 sont magiques
    for (ll i = 0; i < n; i++) {
        cin >> number;
        V.push_back(number);
    }
    
    ll count = 1;
    for (int i = 1; i < n; i++) {
        if (V[i] == V[i - 1]) {
            count++;  // Compte les éléments consécutifs égaux
        } else {
            if (count > 1) {
                ans += (count * (count - 1)) / 2;  // Ajoute toutes les combinaisons de sous-tableaux magiques
            }
            count = 1;  // Réinitialise pour la prochaine séquence
        }
    }
    
    // Si la dernière séquence est une séquence magique
    if (count > 1) {
        ans += (count * (count - 1)) / 2;
    }

    cout << ans << endl;
}
