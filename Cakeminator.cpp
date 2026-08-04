#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin >> r >> c;
    char a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> a[i][j];
        }
    }
    int eatR=0,eatC=0;
    for(int i=0;i<r;i++){
        int countS=0;
        for(int j=0;j<c;j++){
            if(a[i][j] == 'S') countS++;
        }
        if(countS == 0) {
            eatR++;
            for(int j=0;j<c;j++) a[i][j] = '?';
        }
        
        
    }

    for(int i=0;i<c;i++){
        int count=0;
        for(int j=0;j<r;j++){
            if(a[j][i] =='S') {
                count = 0;
                break;
            }
            else {
                if(a[j][i] == '?') continue;
                else count++;
            }
        }
        eatC += count;
    }
    int total = (eatR*c) + eatC;
    cout << total << endl;
}