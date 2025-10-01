#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int row = (n-1)/2;
    // up, down,left,right
    int b = row+1,c= row-1,d = row+1,e = row-1;
    // primary diagonal
    int i = row-1,j=row-1,k=row+1,l=row+1;
    // secondary diagonal
    int m = row-1,o=row+1,p=row+1,q=row-1;
    int col = (n-1)/2;
    sum+=a[row][col];
    while(b<n){
        // down
        sum+=a[b][col];
        b++;
        // up
        sum+=a[c][col];
        c--;
        // right
        sum+=a[row][d];
        d++;
        // left
        sum+=a[row][e];
        e--;
        // primary diagonal
        sum+=a[i][j]; 
        i--;
        j--;
        sum+=a[k][l];
        k++;
        l++; 
        // secondary diagonal 
        sum+=a[m][o];
        m--;
        o++;
        sum+=a[p][q];
        p++;
        q--;
    }
    cout<<sum<<endl;
   
}