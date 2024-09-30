#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bL, bR, gL, gR;
    cin >> gL >> gR >> bL >> bR;

    if ((gL <= bR + 1 && bR <= 2 * (gL + 1)) || (gR <= bL + 1 && bL <= 2 * (gR + 1)))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
