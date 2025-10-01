#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int ans1 = 0, ans2 = 0;

    // un cycle complet, c'est le ppcm le plus petit multiple pour que s1 revient à 0 et s2 revient à 0
    // c'est sur que après m*k (ppcm), Shadow et sonic reviennent à 0
    int cycle = s1.size() * s2.size(); // <<<<< correction ici
    int i = 0, j = 0;
    int length1 = cycle;
    while (length1--)
    {
        if (s1[i] == 'S' && s2[j] == 'R')
            ans1++;
        else if (s1[i] == 'P' && s2[j] == 'S')
            ans1++;
        else if (s1[i] == 'R' && s2[j] == 'P')
            ans1++;
        else if (s1[i] == 'R' && s2[j] == 'S')
            ans2++;
        else if (s1[i] == 'S' && s2[j] == 'P')
            ans2++;
        else if (s1[i] == 'P' && s2[j] == 'R')
            ans2++;
        i = (i + 1) % s1.size();
        j = (j + 1) % s2.size();
    }

    long long fullCycles = n / cycle;
    long long rest = n % cycle;

    long long res1 = fullCycles * ans1;
    long long res2 = fullCycles * ans2;

    i = 0, j = 0;
    while (rest--)
    {
        if (s1[i] == 'S' && s2[j] == 'R')
            res1++;
        else if (s1[i] == 'P' && s2[j] == 'S')
            res1++;
        else if (s1[i] == 'R' && s2[j] == 'P')
            res1++;
        else if (s1[i] == 'R' && s2[j] == 'S')
            res2++;
        else if (s1[i] == 'S' && s2[j] == 'P')
            res2++;
        else if (s1[i] == 'P' && s2[j] == 'R')
            res2++;
        i = (i + 1) % s1.size();
        j = (j + 1) % s2.size();
    }

    cout << res1 << " " << res2 << endl;
}
