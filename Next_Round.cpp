#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,count=0,pos=0;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(i==k-1) pos = a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>=pos && a[i]>0) count++;
    }
    cout << count << endl;
}