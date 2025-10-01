#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,indexMin=0,minValue=1e10,count=1;
    cin>>n;
    int a[n]; 
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]<minValue){
            minValue=a[i];
            indexMin=i;
            count=1;
        }
        else if(a[i]==minValue){
            count++;
        }
    }
    if(count>1){
        cout<<"Still Rozdil"<<endl;
    }
    else{
        cout<<indexMin<<endl;
    }
}


