#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, ans;
    cin >> s;
    map<int, int> M;
    stringstream ss(s);
    string temp;

    while (getline(ss, temp, ','))
    {
        int num = stoi(temp);
        M[num] = num;
    }
    auto it1 = M.begin();
    int count = 0;
    
    for (auto it = M.begin(); it != prev(M.end()); ++it)
    {
        auto next_it = next(it);
        
        if (it->first + 1 == next_it->first) 
        {
            count++;
            continue;
        }
        else
        {
            if (count != 0)
            {
                ans += to_string(it1->first) + '-' + to_string(it->first) + ',';
                it1 = next_it; 
            }
            else
            {
                ans += to_string(it->first) + ',';
                it1 = next_it;
            }
        }
        count = 0;
    }

    if (count != 0)
    {
        ans += to_string(it1->first) + '-' + to_string(prev(M.end())->first);
    }
    else
    {
        ans += to_string(prev(M.end())->first);
    }

    cout << ans << endl;

    return 0;
}
