#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=0) {
        cout<<n<<endl;
        return 0;
    }
    else{
        string s=to_string(n);
        string s1=s.substr(0,s.length()-1);
        string s2=s.substr(0,s.length()-2) + s.substr(s.length()-1,1);
        int n1=stoi(s1),n2=stoi(s2);
        cout<<max(n1,n2)<<endl;
        return 0;
    }
}