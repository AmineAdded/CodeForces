#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    
    vector<int> a(m);
    int div = n/m;
    int rest = n%m;
    for(int i=0;i<m;i++) a[i] = div;
    for(int i=0;i<rest;i++) a[i]++;
    for(int i=0;i<m;i++) cout << a[i] << " ";
}