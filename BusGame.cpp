#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll x, y, turn = 1;
    cin >> x >> y;

    while (1) {
        if (turn % 2 != 0) { 
            if (x >= 2 && y >= 2) {
                x -= 2;
                y -= 2;
            } else if (x >= 1 && y >= 12) {
                x -= 1;
                y -= 12;
            } else if (y >= 22) {
                y -= 22;
            } else {
                cout << "Hanako" << endl;
                return 0;
            }
        } else { 
            if (y >= 22) {
                y -= 22;
            } else if (x >= 1 && y >= 12) {
                x -= 1;
                y -= 12;
            } else if (x >= 2 && y >= 2) {
                x -= 2;
                y -= 2;
            } else {
                cout << "Ciel" << endl; 
                return 0;
            }
        }
        turn++;
    }
}
