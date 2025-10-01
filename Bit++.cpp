#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    int x=0;
    for(int i=0;i<n;i++){
        if(a[i][0]=='+' || a[i][1]=='+' || a[i][2]=='+'){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x;
}