#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    double dist = 0;
    vector<int> x(n), y(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n - 1; i++) {
        dist += sqrt(pow(x[i] - x[i + 1], 2) + pow(y[i] - y[i + 1], 2));
    }

    double result = (dist / 50.0) * k;

    cout << fixed << setprecision(10) << result << endl;

    return 0;
}
