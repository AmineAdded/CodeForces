#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,countA=0,countB=0,draw=0;
    cin >> a >> b;

    for(int i=1;i<=6;i++){
        if (abs(a-i) < abs(b-i)) countA++;
        else{
            if(abs(b-i) < abs(a-i)) countB++;
            else draw++;
        } 
    }

    cout << countA << " " << draw << " " <<countB << endl;
}