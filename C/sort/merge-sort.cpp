#include <iostream>

using namespace std;

void merge(int *arr, int start, int mid, int end) {

    int *arr2 = (int *)malloc(sizeof(int) * (end - start + 1));

    int k = 0, i = start, j = mid + 1;
    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            arr2[k++] = arr[i++];
        } else {
            arr2[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        arr2[k++] = arr[i++];
    }

    while (j <= end) {
        arr2[k++] = arr[j++];
    }

    /* copy the data to final array */
    for (int i = 0; i < k; i++) {
        arr[start + i] = arr2[i];
    }

    free(arr2);
}

void mergesort(int *arr, int start, int end) {
    if (start >= end) return;
    int mid = (start + end) / 2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

void merge_sort(int *arr, int n) {
    mergesort(arr, 0, n - 1);
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
        merge_sort(a, n);

        /* print sorted array */
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}