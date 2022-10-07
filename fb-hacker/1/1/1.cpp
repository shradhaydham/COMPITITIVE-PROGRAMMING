#include <bits/stdc++.h>

using namespace std;

int to_vowel(int *arr, char vowel) {
    int ans = 0;
    for (int i = 0; i < 26; i++) {
        if (i == 0 || i == 4 || i == 8 || i == 14 || i == 20) {
            if (i != vowel - 'A') {
                ans += (arr[i] * 2);
            }
        } else {
            ans += arr[i];
        }
    }
    return ans;
}

int to_consonant(int *arr, char consonant) {
    int ans = 0;
    for (int i = 0; i < 26; i++) {
        if (i != 0 && i != 4 && i != 8 && i != 14 && i != 20) {
            if (i != consonant - 'A') {
                ans += (arr[i] * 2);
            }
        } else {
            ans += arr[i];
        }
    }
    return ans;
}

void solve() {
    string s;
    cin >> s;

    int arr[26] = {0}; // count

    // count array
    for (int i = 0; i < s.length(); i++)
        arr[s[i] - 'A']++;

    // store large vowel and consonant
    pair<char, int> max_consonant = make_pair('B', -1), max_vowel = make_pair('A', -1);

    // find large vowel and consonant
    for (int i = 0; i < 26; i++) {

        // count vowel
        if (i == 0 || i == 4 || i == 8 || i == 14 || i == 20) {
            if (max_vowel.second < arr[i]) {
                max_vowel.first = (char)(i + 'A');
                max_vowel.second = arr[i];
            }
        } else {
            // count consonant
            if (max_consonant.second < arr[i]) {
                max_consonant.first = (char)(i + 'A');
                max_consonant.second = arr[i];
            }
        }
    }

    if (max_vowel.second == -1)
        max_vowel.second = 0;

    if (max_consonant.second == -1)
        max_consonant.second = 0;

    cout << min(to_vowel(arr, max_vowel.first), to_consonant(arr, max_consonant.first)) << endl;
}

int main() {
    int t;
    cin >> t;
    for (int T = 0; T < t; T++) {
        cout << "Case #" << T + 1 << ": ";
        solve();
    }
    return 0;
}