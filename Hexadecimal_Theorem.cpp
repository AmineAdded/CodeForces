#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n == 0) {
        cout << 0 << " " << 0 << " " << 0<< endl;
        return 0;
    } 
    if (n == 1) {
        cout << 0 << " " << 0 << " " << 1<< endl;
        return 0;
    }

    long long a = 0, b = 1, c;
    int index = 1;

    while (b < n) {
        c = a + b;
        a = b;
        b = c;
        index++;
    }

    a=0,b=1;
    for(int i=2;i<index;i++){
        c = a + b;
        a = b;
        b = c;
    }
    cout<<0<<" "<<a<<" "<<c<<endl;


    return 0;
}
