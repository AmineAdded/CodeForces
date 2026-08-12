#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0,police=0;
    cin >> n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] == -1){
            count++;
            if(police > 0){
                police--;
                count--;
            }
        }
        else police+=a[i];
    }
    cout << count << endl;
}