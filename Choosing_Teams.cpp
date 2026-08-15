#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,count=0;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int i=2;
    while((i<n) && (5-a[i]>=k)){
        count++;
        i+=3;
    }
    cout << count << endl;

}