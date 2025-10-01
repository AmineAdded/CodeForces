#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, seq1, seq2;
    cin >> s;           
    cin >> seq1 >> seq2;

    string reverse_s = s;
    reverse(reverse_s.begin(), reverse_s.end());

    int pos1 = s.find(seq1);
    int pos2 = s.find(seq2, pos1 + seq1.length());

    int pos3 = reverse_s.find(seq1);
    int pos4 = reverse_s.find(seq2, pos3 + seq1.length());

    bool forward = (pos1 != -1 && pos2 != -1);  // Can appear from A to B
    bool backward = (pos3 != -1 && pos4 != -1); // Can appear from B to A

    if (forward && backward)
        cout << "both" << endl;
    else if (forward)
        cout << "forward" << endl;
    else if (backward)
        cout << "backward" << endl;
    else
        cout << "fantasy" << endl;

    return 0;
}
