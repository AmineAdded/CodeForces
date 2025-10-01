#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    int turn = 0; 

    for(int i = 0; i < n; i++) {
        if(turn == 0)
            s += 'a';
        else if(turn == 1)
            s += 'b';
        else if(turn == 2)
            s += 'c';
        else
            s += 'd';

        turn++;
        if(turn > 3)  
            turn = 0;
    }

    cout << s;
}
