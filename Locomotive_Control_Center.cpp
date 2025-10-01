#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // LIFO
    stack<long long> B;           
    vector<string> couple;           // ⚠️ utiliser vector car nombre d’opérations > n possible

    int j = 1;                     
    for (int i = n - 1; i >= 0; i--) {
        if (A[i] == j) {
            couple.push_back("A C"); // envoyer directement à C
            j++;
            // après avoir placé j, on vérifie si le haut de B peut aussi aller à C
            while (!B.empty() && B.top() == j) {
                couple.push_back("B C");
                B.pop();
                j++;
            }
        } else {
            // sinon on stocke dans B
            B.push(A[i]);
            couple.push_back("A B");
        }
    }

    // vider le reste de B si possible
    while (!B.empty()) {
        if (B.top() == j) {
            couple.push_back("B C");
            B.pop();
            j++;
        } else {
            cout << -1 << endl; // impossible de respecter l’ordre croissant
            return 0;
        }
    }

    cout << couple.size() << endl;
    for (string op : couple) {
        cout << op << endl;
    }
}
