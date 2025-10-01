#include<iostream>
using namespace std;
 
int main(){
char a,b,c,d,e;
int n,ans=0,w,x,y,z,m[10][10][10][10];
cin>>n;
for(int i=1; i<=n; i++){
cin>>a>>b>>c>>d;
if(i!=n) cin>>e>>e;
w=a-'0';
x=b-'0';
z=c-'0';
y=d-'0';
if(m[w][x][y][z]!=1){
ans++;
m[w][x][y][z]=1;
m[x][y][z][w]=1;
m[y][z][w][x]=1;
m[z][w][x][y]=1;
}
}
cout<<ans;
}