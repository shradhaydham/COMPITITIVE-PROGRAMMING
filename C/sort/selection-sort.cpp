#include <iostream>

using namespace std;
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void insertion_sort(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        int small = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[small] > arr[j]) {
                small = j;
            }
        }
        swap(arr[small], arr[i]);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        /* sort the array a */
        insertion_sort(a, n);

        /* print sorted array */
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}