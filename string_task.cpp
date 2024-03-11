#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char> str;

    for (int i = 0; i < s.size(); i++) {
        str.push_back(s[i]);
    }

    for (int i = str.size() - 1; i >= 0; i--) {
        char currentChar = tolower(str[i]);

        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u' || currentChar == 'y') {
            str.erase(str.begin() + i);
        } else {
            str.insert(str.begin() + i, '.');
            str[i + 1] = tolower(str[i + 1]);
        }
    }

    for (char c : str) {
        cout << c;
    }

    return 0;
}
