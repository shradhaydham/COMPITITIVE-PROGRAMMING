#include <bits/stdc++.h>

using namespace std;

int *getKMP(string s) {

    int m = s.length();
    int *ans = new int[s.length()];

    ans[0] = 1;

    int i = 1;
    int len = 0;
    while (i < m) {
        if (pat[len] == pat[i]) {
            len++;
            ans[i] = len;
            i++;
        }
    }

    return ans;
}

/* 
    kmp string searching algo
*/
void KMP(string s, string patt) {
}

int main() {

    string s = "shishishivanshu";
    string patter = "shivanshu";
    KMP(s, patter);
    return 0;
}