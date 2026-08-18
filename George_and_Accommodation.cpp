#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin >> n;
    int p,q;
    for(int i=0;i<n;i++){
        cin >> p >> q;
        if(q-p >= 2) count++;
    }
    cout << count << endl;
}