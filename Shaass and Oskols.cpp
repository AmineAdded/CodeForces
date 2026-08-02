#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    vector<int> birds(n);
    cin >> n;
    for (int i=0;i<n;i++) cin >> birds[i];
    cin >> m;

    for (int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        if(x-1 > 0 && x < n){
            if(y-1 == 0) birds[x]+= birds[x-1] -1;
            else if(birds [x-1] == y) birds[x-2]+= birds[x-1] -1;
            else{
                birds[x]+= birds[x-1] -y;
                birds[x-2]+= y-1;
            }
        }
        else if(x-1 == 0){
            if(y-1 == 0) birds[x]+= birds[x-1] -1;
            else birds[x]+= birds[x-1] -y;
        }
        else if(x == n){
            if(y == birds[x-1]) birds[x-2]+= birds[x-1] -1;
            else birds[x-2]+= y - 1;
        }
        birds[x-1]=0;
    }

    for (int i=0;i<n;i++){
        cout << birds[i] << endl;
    }
}