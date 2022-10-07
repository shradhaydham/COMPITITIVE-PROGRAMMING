#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void count_sort(int *arr, int n){
    
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
        count_sort(a, n);

        /* print sorted array */
        for(int i=0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}