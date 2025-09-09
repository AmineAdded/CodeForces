#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    // Compteurs de lettres
    vector<int> count1(26, 0), count2(26, 0);

    // mathalan c = 'A' donc ta3tyk c - 'A' = 0
    for (char c : s1) count1[c - 'A']++;
    for (char c : s2) count1[c - 'A']++;

    // Compter les lettres de s3
    for (char c : s3) count2[c - 'A']++;

    // si les compteurs sont égaux (case par case par exeemple count1[0] == count2[0] ...), alors c'est possible
    if (count1 == count2)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
