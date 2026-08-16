#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) a[i][j] ='*';
    }
    int s = 1,count=0;
    while (count < n){
        for(int i=0;i<n;i++){
            for(int j=(n-s)/2; j<(n-s)/2 +s;j++){
                a[i][j] ='D';
            }
        
        if(s == n) s-=2;
            else{
                if(count >= n/2) s-=2;
                else s+=2;
            }
            count++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j] <<"";
        }
        cout << endl;
    }
}