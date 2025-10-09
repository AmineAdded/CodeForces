#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    map<char, int> mp;
    for (int i = 0; i < 16; i++)
    {
        char x;
        cin >> x;
        if (int(x) >= 49 && int(x) <= 57)
            mp[x]++;
    }

    for (auto i : mp)
    {
        if (i.second > 2 * k)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}