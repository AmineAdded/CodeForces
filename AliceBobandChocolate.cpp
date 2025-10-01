#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> s(n);
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int a = 0, b = n - 1;
    int timeA = 0, timeB = 0; 
    int countA = 0, countB = 0; 

    while (a <= b) {
        if (timeA <= timeB) {
            timeA += s[a++];
            countA++;
        } else {
            timeB += s[b--];
            countB++;
        }
    }

    cout << countA << " " << countB << endl;
    return 0;
}
