#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i=1;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int i=1;
    while(i<n){
        if (a[i] != i){
            cout << i << endl;
            return 0;
        }
        i++;
    }
    cout << i << endl;
}