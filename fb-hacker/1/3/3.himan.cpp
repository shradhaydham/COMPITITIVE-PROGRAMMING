#include <bits/stdc++.h>
#define print(arr, n)                                  \
    for (int _ = 0; _ < n; _++) cout << arr[_] << ' '; \
    cout << endl
#define input(arr, n) \
    for (int _ = 0; _ < n; _++) cin >> arr[_]
using namespace std;

void solve() {
    int n, dots, Os;

    cin >> n;
    string arr[n]; // string array to store the matrix

    int ans = INT_MAX, count = -1;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        dots = 0, Os = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 'O')
                Os++;
            if (arr[i][j] == '.')
                dots++;
        }

        if (Os > 0) // if no O 
            continue;
        
        if (ans > dots) {
            ans = dots;
            count = 1;
        }

        if (ans == dots)
            count++;
    }

    for (int i = 0; i < n; i++) {
        
        dots = 0, Os = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j][i] == 'O')
                Os++;
            if (arr[j][i] == '.')
                dots++;
        }
        
        if (Os > 0)
            continue;

        if (ans > dots) {
            ans = dots;
            count = 1;
        }
        
        if (ans == dots)
            count++;
    }

    if (count <= 0) {
        cout << "Impossible\n";
        return;
    }

    cout << dots << " " <<count << endl;
}

int main() {
    int t;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        printf("Case #%d: ", T);
        solve();
    }
    return 0;
}