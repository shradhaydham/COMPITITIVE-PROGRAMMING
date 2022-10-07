#include <bits/stdc++.h>
#define print(arr, n)                                  \
    for (int _ = 0; _ < n; _++) cout << arr[_] << ' '; \
    cout << endl
#define input(arr, n) \
    for (int _ = 0; _ < n; _++) cin >> arr[_]
using namespace std;

void solve() {
    int n;
    cin >> n;
    string arr[n];

    // input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // debug
    // for (int i = 0; i < n; i++) {
    //     cerr << arr[i] << "\n";
    // }
    //
    int min_ele = INT_MAX;
    int count = 0;

    for (int i = 0; i < n; i++) {

        // rows count
        int dots = 0, O = 0, X = 0;
        for (int j = 0; j < n; j++) {
            char temp = arr[i][j];
            if (temp == '.')
                dots++;
            else if (temp == 'X')
                X++;
            else
                O++;
        }

        // col count
        int dots1 = 0, O1 = 0, X1 = 0;
        for (int j = 0; j < n; j++) {
            char temp = arr[j][i];
            if (temp == '.')
                dots1++;
            else if (temp == 'X')
                X1++;
            else
                O1++;
        }

        // if (O == 0 && O1 == 0) {
        //     // can win in both col and rows
        //     if (dots == dots1) {
        //         // both have same space left
        //         if (dots < min_ele) {
        //             min_ele = dots;
        //             count = 1;
        //         } else if (dots == min_ele) {
        //             count++;
        //         }
        //     } else if (dots < dots1) {
        //         if (dots < min_ele) {
        //             min_ele = dots;
        //             count = 1;
        //         } else if (dots == min_ele) {
        //             count++;
        //         }
        //     } else {
        //         if (dots1 < min_ele) {
        //             min_ele = dots1;
        //             count = 1;
        //         } else if (dots1 == min_ele) {
        //             count++;
        //         }
        //     }
        //     continue;
        // }

        if(O == 0 && O1 == 0 && dots == 1 && dots1 == 1 && arr[i][i] == '.'){
            if (dots1 < min_ele) {
                min_ele = dots1;
                count = 1;
            } else if (dots1 == min_ele) {
                count++;
            }
            continue;
        }

        if (O == 0) {
            // no O can win the game
            if (dots < min_ele) {
                min_ele = dots;
                count = 1;
            } else if (dots == min_ele) {
                count++;
            }
        }

        if (O1 == 0) {
            // no O can win the game
            if (dots1 < min_ele) {
                min_ele = dots1;
                count = 1;
            } else if (dots1 == min_ele) {
                count++;
            }
        }
    }

    if (count == 0) {
        cout << "Impossible\n";
    } else {
        cout << min_ele << " " << count << "\n";
    }
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