#include <bits/stdc++.h>
using namespace std;
struct Lunch_Rush
{
    int f;
    int t;
};

int main(){
    int n,k;
    cin>>n>>k;
    Lunch_Rush a[n];
    long long ans=-1e18;
    for(int i=0;i<n;i++){
        cin>>a[i].f>>a[i].t;
        if(a[i].t<=k){
            ans=max(ans,(long long)a[i].f);
        }
        else{
            if(a[i].f-(a[i].t-k) > ans) ans=a[i].f-(a[i].t-k);
        }
    }
    cout<<ans;
}