#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, j = 0;
    cin >> n;
    int a[]={1,2,3,4,5};
    vector<char> s = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};
    
    for (int i = 0; i < n; i++) {
        cout << s[j];
        j++;
        if (j == 7) {
            j = 3;
        }
    }
    return 0;
}
