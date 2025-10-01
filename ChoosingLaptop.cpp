#include <bits/stdc++.h>
using namespace std;

class Laptop {
public:
    int speed;
    int ram;
    int hdd;
    int price;
    bool outdated = true;
};

int main() {
    int n;
    cin >> n;
    vector<Laptop> laptops(n);
    
    for (int i = 0; i < n; i++) {
        cin >> laptops[i].speed >> laptops[i].ram >> laptops[i].hdd >> laptops[i].price;
    }
    
    // Determine which laptops are outdated
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && laptops[j].speed > laptops[i].speed &&
                laptops[j].ram > laptops[i].ram &&
                laptops[j].hdd > laptops[i].hdd) {
                laptops[i].outdated = false;
                break;
            }
        }
    }
    
    // Find the cheapest non-outdated laptop
    int minPrice = INT_MAX;
    int chosenLaptopIndex = -1;
    
    for (int i = 0; i < n; i++) {
        if (laptops[i].outdated) {
            if (laptops[i].price < minPrice) {
                minPrice = laptops[i].price;
                chosenLaptopIndex = i + 1; // Output is 1-based index
            }
        }
    }
    
    cout << chosenLaptopIndex << endl;
    
    return 0;
}
