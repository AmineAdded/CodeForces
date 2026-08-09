#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,sum=0;
    cin >> n >> x;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
        sum += a[i];
    }
    sum = abs(sum);
    if((sum%x) == 0) cout << sum / x << endl;
    else cout << (sum / x) +1 << endl;
}