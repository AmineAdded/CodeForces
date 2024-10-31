#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N;
    cin >> N;

    // Si N est inférieur ou égal à 0, ce n'est pas une puissance de 3
    if (N <= 0) {
        cout << -1 << endl;
        return 0;
    }

    // Calculer le logarithme de N base 3
    long double logResult = log(N) / log(3);
    // Vérifier si le résultat est un entier en comparant avec son arrondi
    if (abs(logResult - round(logResult)) < 1e-10) {
        cout << static_cast<long long>(round(logResult)) << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
