#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
    ll n;
    int m, k;
    cin >> n >> m >> k;
    
    vector<ll> a(m), v(k);
    
    for (int i = 0; i < m; i++)
        cin >> a[i];
    
    for (int i = 0; i < k; i++)
        cin >> v[i];
    
    sort(v.begin(), v.end());
    
    int minimum =100;
    vector<int> ans;
    
    for (int i = 0; i < m; i++) {
        int count = 0;
        int j = 0;
        
        while (j < k && v[j] <= n) {
            if (v[j] % a[i] == 0) { 
                count++;
            }
            j++;
        }
        
        if (count < minimum) {
            minimum = count;
            ans.clear();
            ans.push_back(i + 1); 
        } else if (count == minimum) {
            ans.push_back(i + 1); 
        }
    }
    
    cout << ans.size() << endl;
    for (int idx : ans)
        cout << idx << " ";
    cout << endl;
    
    return 0;
}
