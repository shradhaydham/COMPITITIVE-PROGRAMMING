#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

/* partition from the left */
int partition(int *arr, int start, int end) {
    int pivot = arr[end]; // element to divide the array form
    int i = start;        // index to start filling elements smaller than pivot

    for (int j = start; j < end; j++) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[end]);
    return i;
}

void quicksort(int *arr, int start, int end) {
    if (start < end) {
        int p = partition(arr, start, end);
        quicksort(arr, start, p - 1);
        quicksort(arr, p + 1, end);
    }
}

void quick_sort(int *arr, int n) {
    quicksort(arr, 0, n - 1);
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
        quick_sort(a, n);

        /* print sorted array */
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}