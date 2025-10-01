#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int maxH = *max_element(a.begin(), a.end());
    int minH = *min_element(a.begin(), a.end());

    int posMax = find(a.begin(), a.end(), maxH) - a.begin();
    int posMin = a.rend() - find(a.rbegin(), a.rend(), minH) - 1; 

    int ans = posMax + (n - 1 - posMin);
    // si le posMax est plus grand que posMin, alors on décalant le max vers la gauche, automatoquement le min sera décalé par 1 vers la droite
    if (posMax > posMin) ans--;
    cout << ans << endl;
}
