#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sumA=0,sumB=0;
    cin >> n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int i=0,j=n-1,turn=0;
    while (i<=j){
        int maximum = max(a[i],a[j]);
        if(turn == 0){
            sumA += maximum;
            turn = 1;
        }
        else{
            sumB += maximum;
            turn = 0;
        }
        if(maximum == a[i]){
            i++;
        }
        else{
            j--;
        }
    }
    cout << sumA << " " << sumB << endl;
}