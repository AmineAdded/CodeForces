#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> a(3);
    vector<int> b(3);
    for(int i=0;i<3;i++) cin >> a[i];
    for(int i=0;i<3;i++) cin >> b[i];
    cin >> n;
    int countA = 0,countB = 0;
    int sumA = a[0]+a[1]+a[2];
    int sumB = b[0]+b[1]+b[2];
    if(sumA % 5 == 0) countA = sumA/5;
    else countA = sumA/5 +1;
    if(sumB % 10 == 0) countB = sumB/10;
    else countB = sumB/10 +1;

    if(countA + countB <= n) cout << "YES" << endl;
    else cout << "NO" << endl;
}