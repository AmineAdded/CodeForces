#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[k];
    for (int i = 0; i < k; i++)
        cin >> a[i];

    map<int, int> m; 
    for (int i = 1; i <= n * k; i++)
        m[i] = 0; 

    for (int i = 0; i < k; i++)
        m[a[i]] = 1;

    vector<int> libres;
    for (int i = 1; i <= n * k; i++) {
        if (m[i] == 0)
            libres.push_back(i);
    }

    int idx = 0; 
    for (int i = 0; i < k; i++) {
        cout << a[i] << " "; 
        int temp = n - 1;
        while (temp--) {
            cout << libres[idx++] << " ";
        }
        cout << "\n";
    }

    return 0;
}
