#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin >> n >> s;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin(), a.end());
    int turn = 0;
    for (int i=0;i<n;i++){
        if (turn == n-1) break;
        if (s - a[i] == 0 && turn < n-1){
            turn++;
            break;
        }
       
        s-= a[i];
        turn++;
        
    }
    if(turn == n-1 && s>=0) cout << "YES" << endl;
    else cout << "NO" << endl;

}