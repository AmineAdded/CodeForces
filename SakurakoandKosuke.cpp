#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        int x = 0, turn = 1;
        string ans;
        cin >> n;

        while (x >= -n && x <= n) {
            if (turn % 2 != 0) {
                x -= 2 * turn - 1;  
                ans = "Sakurako";
            } else {           
                x += 2 * turn - 1;      
                ans = "Kosuke";
            }
            
            turn++; 
        }
        
        cout << ans << endl;
    }
    return 0;
}
