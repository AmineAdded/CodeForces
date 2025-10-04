#include <bits/stdc++.h>
using namespace std;
struct Substraction
{
    int a;
    int b;
};

int main(){
    int n;
    cin>>n;
    Substraction v[n];
    for(int i=0;i<n;i++){
        cin>>v[i].a>>v[i].b;
    }
     for(int i=0;i<n;i++){
        bool isZero=false;
        int sum=0;
        int maxElement = max(v[i].a,v[i].b);
        int minElement = min(v[i].a,v[i].b);
        while(!isZero){
            if(minElement==0) isZero = true;
            else if(minElement!=0 && maxElement / minElement ==0 ) isZero = true;
            else{
                sum+=maxElement / minElement;
                int temp = maxElement;
                maxElement = minElement;
                minElement = temp % minElement;
            }
        }
        cout<<sum<<endl;
    }

}