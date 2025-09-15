#include<bits/stdc++.h>
using namespace std;
int main(){
    int row=0,col=0;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int x;
            cin>>x;
            if(x==1){
                row=i;
                col=j;
            }
        }
    }
    int rowMoves=abs(3-row);
    int colMoves=abs(3-col);
    cout<<rowMoves+colMoves<<endl;
}