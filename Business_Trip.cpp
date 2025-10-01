#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    vector<int> a(12);
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0, sum = 0;
    if (sum >= k)
    {
        cout << ans << endl;
        return 0;
    }
    for (int i = 11; i >= 0; i--)
    {
        sum += a[i];
        ans++;
        if (sum >= k)
        {
            cout << ans << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}