#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,div=1,x;
    cin>>n>>k;
    if(k==0){
        cout<<n<<endl;
        return 0;
    }
    while(true){
        x=n*div;
        div++;
        string s=to_string(x);
        int c=s.size()-1;
        int q=0;
        while(s[c]=='0'){
            q++;
            c--;
            if(q>=k){
                cout<<x<<endl;
                return 0;
            }
        }
    }
    cout<<x<<endl;
}