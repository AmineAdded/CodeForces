#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s = to_string(n);
    bool isValid = true;
    int i=0;
    while(isValid && i<s.length()){
        if((i+3 <= n) && (s.substr(i,3) == "144")) i+=3;
        else if((i+2 <= n) && (s.substr(i,2) =="14")) i+=2;
        else if((i+1 <= n) && (s.substr(i,1)=="1")) i++;
        else {
            isValid = false;
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

}