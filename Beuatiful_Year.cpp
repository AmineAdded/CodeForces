#include<bits/stdc++.h>
using namespace std;
int main(){
    string y;
    cin>>y;
    int year=stoi(y)+1;
    while(year<9013){
        string s=to_string(year);
        if(s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[2] && s[1]!=s[3] && s[2]!=s[3]){
            cout<<year<<endl;
            break;
        }
        year++;
    }
}