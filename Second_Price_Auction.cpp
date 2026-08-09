#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,indice = 0,max = 0;
    cin >> n;
    vector <int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if (a[i] > max){
            indice = i+1;
            max = a[i];
        }
    }
    sort(a.begin(),a.end());
    cout << indice << " " << a[n-2] << endl;
}