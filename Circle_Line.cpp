#include<bits./stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s,t;
    cin>>s>>t;
    int dist1=0,dist2=0;
    int pos1=0,pos2=0;
    if(s>t) {
        pos1=s-t,pos2=n-pos1;
        // dist1
        int i=s-2;
        while(pos1--){
            dist1+=a[i];
            i--;
        }
        // dist2
        int j=s-1;
        while(pos2--){
            if(j==n) j=0;
            dist2+=a[j];
            j++;
        }
        cout<<min(dist1,dist2)<<endl;
    }
    else {
        pos1=t-s,pos2=n-pos1;
        //  dist1
        int i=s-1;
        while(pos1--){  
            dist1+=a[i];
            i++;
        }
        // dist2
        int j=s-2;  
        while(pos2--){
            if(j<0) j=n-1;
            dist2+=a[j];
            j--;
        }   
        cout<<min(dist1,dist2)<<endl;
    }
}