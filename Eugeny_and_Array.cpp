#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    int countA=0,countB=0;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> res(m);
    for (int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] == 1) countA++;
        else countB++;
    }

    for (int i=0;i<m;i++){
        int l,r;
        cin >> l >> r;
        if(r-l == 0 || (r-l +1)%2 != 0) res[i] = 0;
        else{
            int dist = r-l +1;
            int minimum = min(countA,countB);
            if(minimum >= dist/2) res[i] = 1;
            else res[i] = 0;
        }
        
    }
    for(int i=0;i<m;i++){
        cout << res[i] << endl;
    }
}