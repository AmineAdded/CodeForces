#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long combinaison(ll n, ll k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    if (k > n - k) k = n - k; // Utiliser la propriété C(n, k) = C(n, n - k)
    
    long long result = 1;
    for (int i = 0; i < k; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}
int main(){
    ll n,ans=0,number;
    map<ll,ll>M;
    cin>>n;
    ans+=n;
    for(ll i=0;i<n;i++){
        cin>>number;
        M[number]++;
    }
    for(auto it=M.begin();it!=M.end();it++){
        ans+=combinaison(it->second,2);
    }

    cout<<ans<<endl;

}