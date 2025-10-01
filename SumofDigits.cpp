#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string n;
    cin >> n;

    if (n.size() == 1) {
        cout << 0 << endl;
        return 0;
    }

    ll number = 0;
    while(n.size() > 1)
    {
        ll sum = 0;
        for(char c : n)
        {
            sum += c - '0'; // Convertir chaque caractère en entier
        }
        n = to_string(sum);
        number++;
    }
    
    cout << number << endl;
}
