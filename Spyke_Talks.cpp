#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, ans = 0;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1] && a[i] == a[i + 2] && a[i]!=0)
        {
            cout << -1 << endl;
            return 0;
        }

        else
        {
            if (a[i] == a[i + 1] && a[i]!=0)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}