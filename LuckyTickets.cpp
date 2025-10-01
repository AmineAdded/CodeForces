#include<bits/stdc++.h>
using namespace std;
int n,t,a[3],N;
 
int main()
{
	cin >> n;
	while(n--)
    {
        cin >> t;
        //a pour les restes possibles de 3 
        a[t%3]++;
    }
    // a[0]/2: tous les tickets formés par uniquement deux piéces lucky
	cout << a[0]/2 + min(a[1],a[2]); 
}