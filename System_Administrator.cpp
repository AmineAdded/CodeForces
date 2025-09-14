#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sumA=0,sumB=0,packetA=0,packetB=0;
    int x,y,t;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t>>x>>y;
        if(t==1){
            sumA+=x;
            packetA++;
        }
        else{
            sumB+=x;
            packetB++;
        }
    }
    if(sumA>=(packetA*10)/2){
        cout<<"LIVE"<<endl;
    }
    else{
        cout<<"DEAD"<<endl;
    }
    if(sumB>=(packetB*10)/2){
        cout<<"LIVE"<<endl;
    }
    else{
        cout<<"DEAD"<<endl;
    }
}