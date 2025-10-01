#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    while (s.find("WUB") != string::npos) {
        s.replace(s.find("WUB"), 3, " ");
    }


    string result;
    bool space = false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            result += s[i];
            space = false;
        } else {
            if (!space) { 
                result += ' ';
                space = true;
            }
        }
    }

    if (!result.empty() && result.back() == ' ')
        result.pop_back();

    cout << result << endl;
}
