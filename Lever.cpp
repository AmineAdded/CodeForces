#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int pivot = s.find('^');
    long long left = 0, right = 0; 

    // Parcourir la partie gauche
    for (int i = 0; i < pivot; i++) {
        if (s[i] != '=') {
            int masse = s[i] - '0';
            int distance = pivot - i;
            left += (long long)masse * distance;
        }
    }

    // Parcourir la partie droite
    for (int i = pivot + 1; i < (int)s.length(); i++) {
        if (s[i] != '=') {
            int masse = s[i] - '0';
            int distance = i - pivot;
            right += (long long)masse * distance;
        }
    }

    if (left == right)
        cout << "balance" << endl;
    else if (left > right)
        cout << "left" << endl;
    else
        cout << "right" << endl;

    return 0;
}
