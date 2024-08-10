#include<bits/stdc++.h>

using namespace std;

int main() {
    string paragraph;
    map<char, int> frequency;

    cout << "Enter a paragraph: ";
    getline(cin, paragraph);

    for (char ch : paragraph) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            frequency[ch]++;
        }
    }

    cout << "Character frequencies:" << endl;
    for (const auto& pair : frequency) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
