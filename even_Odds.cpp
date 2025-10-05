#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long oddCount = (n + 1) / 2;  // nombre d'impairs

    if (k <= oddCount)
        cout << 2 * k - 1 << endl;  // k-ième impair
    else
        cout << 2 * (k - oddCount) << endl;  // k-ième pair

    return 0;
}
