#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin >> n;
    char a[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i%2 == 0) && (j == 0)){
                a[i][j] = 'C';
                count++;
            }
            else if ((i%2 == 1) && (j == 0)) {
                a[i][j] = '.';
            }
            else{
                if(j>0 && a[i][j-1] == 'C') a[i][j] = '.';
                else {
                    a[i][j] = 'C';
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j];
        }
        cout << endl;
    }
}