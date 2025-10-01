#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is_palindrome(string time) {
    string reversed_time = time;
    reverse(reversed_time.begin(), reversed_time.end());
    return time == reversed_time;
}

void next_minute(int &hours, int &minutes) {
    minutes++;
    if (minutes == 60) {
        minutes = 0;
        hours++;
    }
    if (hours == 24) {
        hours = 0;
    }
}

int main() {
    string time1;
    cin >> time1;

    int hours = stoi(time1.substr(0, 2));
    int minutes = stoi(time1.substr(3, 2));

    while (true) {
        next_minute(hours, minutes);

        // Formater l'heure et les minutes en format "HH:MM"
        string hh = (hours < 10) ? "0" + to_string(hours) : to_string(hours);
        string mm = (minutes < 10) ? "0" + to_string(minutes) : to_string(minutes);
        string current_time = hh + mm;

        if (is_palindrome(current_time)) {
            cout << hh << ":" << mm << endl;
            break;
        }
    }

    return 0;
}
