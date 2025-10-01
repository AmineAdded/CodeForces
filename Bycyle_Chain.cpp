#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++) cin>>b[i];

    int ans=0,count=1;
    for(int i=0;i<m;i++){
        bool isDiv=false;
        int j=0;
        while(!isDiv && j<n){
            if(b[i]%a[j]==0){
                isDiv=true;
                if(b[i]/a[j] == ans){
                    count++;
                }
                else if(b[i]/a[j] > ans){
                    ans=max(ans,b[i]/a[j]);
                    count=1;
                }
                
            }
            j++;
        }
        
    }
    cout<<count<<endl;

}