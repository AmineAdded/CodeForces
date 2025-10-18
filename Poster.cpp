#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    string s;
    cin>>n>>k>>s;
    int righDist = n-k, leftDist = k-1;
    int minDist = min(righDist, leftDist);
    if(minDist == righDist){
        for(int i=0;i<righDist;i++){
            cout<<"RIGHT"<<endl;
        }
        for(int i=n-1;i>=0;i--){
            cout<<"PRINT "<<s[i]<<endl;
            if(i!=0) cout<<"LEFT"<<endl;
        }
    }
    else{
        for(int i=0;i<leftDist;i++){
            cout<<"LEFT"<<endl;
        }
        for(int i=0;i<n;i++){
            cout<<"PRINT "<<s[i]<<endl;
            if(i!=n-1) cout<<"RIGHT"<<endl;
        }
    }

}