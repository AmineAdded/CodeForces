#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n);
    int ans=0,ones=0,twos=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) ones++;
        else if(a[i]==2) twos++;
    }
    sort(a.begin(),a.end());
    for (int i=0;i<n;i++){
        if(m>0) {
            m--;
            if(ones!=0) ones--;
            else if(twos!=0) twos--;
        }
        else if(ones!=0) {
            ans++;
            ones--;
        }
        else if(k>0 && twos!=0){
            k--;
            twos--;
        }
        else ans++;
    }
    cout<<ans<<endl;
}