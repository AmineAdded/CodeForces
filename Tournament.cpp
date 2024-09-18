#include<bits/stdc++.h>
#define N 105
using namespace std;
int a[N],b[N][N];
int n;
int main(){
	cin>>n;
	for(int i=1,u,v;i<n*(n-1)/2;i++){
		cin>>u>>v;
		b[u][v]=b[v][u]=1,a[u]++;
	}
	for(int i=1;i<n;i++)
		for(int j=i+1;j<=n;j++)
			if(b[i][j]==0){
				if(a[i]<a[j]) cout<<j<<' '<<i<<endl;
				else cout<<i<<' '<<j<<endl;
				return 0;
			}
	return 0;	
}
