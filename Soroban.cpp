#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n == 0){
        cout << "O-|-OOOO" << endl;
        return 0;
    }
    int rest,div,i=0;
    char a [10][8];
    div = n/10;
    rest = n%10;
    while(n > 0){
        if(rest >= 5){
            a[i][0] = '-';
            a[i][1] = 'O';
            a[i][2] = '|';
            rest -=5;
            for(int j=3;j<rest+3;j++){
                a[i][j] = 'O';
            }  
            a[i][rest+3] = '-';
            if(rest+3 < 7){
                for(int j=rest+4;j<8;j++){
                    a[i][j] = 'O';
                }
            }
        }
        else{
            a[i][0] = 'O';
            a[i][1] = '-';
            a[i][2] = '|'; 
            for (int j=3;j<rest+3;j++){
                a[i][j] = 'O';
            }
            a[i][rest+3] = '-';
            if(rest+3 < 7){
                for(int j=rest+4;j<8;j++){
                    a[i][j] = 'O';
                }
            }
        }
        i++;
        n = div;
        div = div/10;
        rest = n%10;
    }

    for(int c=0;c<i;c++){
        for(int d=0;d<8;d++){
            cout << a[c][d] ;
        }
        cout << endl;
    }
    
}