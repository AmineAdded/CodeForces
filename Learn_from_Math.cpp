#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int div=2;
    while(1){
        if((n - 4) % div == 0){
            cout << 4 << " " << n - 4 << endl;
            return 0;
        }
        if((n - 6) % div == 0){
            cout << 6 << " " << n - 6 << endl;
            return 0;
        }
        if((n - 9) % div == 0){
            cout << 9 << " " << n - 9 << endl;
            return 0;
        }
        div++;
    }

}