#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,chest=0,back=0,biceps=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i%3==0){
            chest+=x;
        }
        else if(i%3==1){
            biceps+=x;
        }
        else{
            back+=x;
        }
    }
    int maxExcerice=max({chest,back,biceps});
    if(maxExcerice==chest){ cout<<"chest"<<endl; }
    else if(maxExcerice==back){ cout<<"back"<<endl; }
    else{ cout<<"biceps"<<endl; }
}