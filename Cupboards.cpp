#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,left0=0,left1=0,right0=0,right1=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        for(int j=0;j<2;j++){
            cin>>x;
            if(j==0){
                if(x==0) left0++;
                else left1++;
            }
            else{
                if(x==0) right0++;
                else right1++;
            }
        }
    }
    int minLeft = min(left0,left1);
    int minRight = min(right0,right1);
    cout<<minLeft+minRight<<endl;
}