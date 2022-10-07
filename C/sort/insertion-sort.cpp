#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void insertion_sort(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        int small = arr[j--];
        while (j >= 0 && arr[j] > small) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[++j] = small;
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