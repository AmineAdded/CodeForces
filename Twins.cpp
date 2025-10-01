#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0,sum=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    int sum1=0;
    for(int i=n-1;i>=0;i--){
        sum1+=a[i];
        ans++;
        sum-=a[i];
        if(sum1>sum){
            cout<<ans<<endl;
            return 0;
        }
    }
}