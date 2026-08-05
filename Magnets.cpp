#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp=0,count=0;
    cin >> n;

    int a;
    for(int i=0;i<n;i++){
        cin >> a;
        if(temp == a) continue;
        else{
            count++;
            temp = a;
        }
    }
    cout << count <<endl;
}