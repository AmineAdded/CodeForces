#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> k(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>k[i];
        sum+=k[i];
    } 

    vector<int> m(sum);
    for(int i=0;i<sum;i++){
        cin>>m[i];
    }
    

    int ans=10e8,j=0;
    for(int i=0;i<n;i++){
        int tempsum=0, cnt=1;
        while(j<sum && cnt<=k[i]){
            tempsum+=m[j]*5+15;
            j++;
            cnt++;
        }
        ans=min(ans,tempsum);
    }

    cout<<ans<<endl;
}