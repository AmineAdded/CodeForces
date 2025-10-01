#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, c;
    cin >> a >> c;
    string sA, sC;
    while (a)
    {
        sA += to_string(a % 3);
        a /= 3;
    }
    while (c)
    {
        sC += to_string(c % 3);
        c /= 3;
    }
    if (sA.size() > sC.size())
        sC.append(sA.size() - sC.size(), '0');
    else
        sA.append(sC.size() - sA.size(), '0');

    reverse(sA.begin(), sA.end());
    reverse(sC.begin(), sC.end());

    string res;
    for (int i = 0; i < sA.size(); i++)
    {
        int aDigit = sA[i] - '0';
        int cDigit = sC[i] - '0';
        if (aDigit % 3 == cDigit)
        {
            res += '0';
        }
        else if ((aDigit + 1) % 3 == cDigit)
        {
            res += '1';
        }
        else
        {
            res += '2';
        }
    }
    int j=0;
    int ans=0;
    for(int i=sA.size()-1;i>=0;i--){
       int digit=res[i]-'0';
        ans+=digit*pow(3,j);
        j++;
    }
    cout << ans << endl;
}