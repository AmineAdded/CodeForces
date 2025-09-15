#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,ans=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        int count=0;
        while(x>0){
            int rest=x%10;
            if(rest==4 || rest==7){
                count++;
            }
            x/=10;
        }
        if(count<=k) ans++;
    }
    cout<<ans<<endl;

}