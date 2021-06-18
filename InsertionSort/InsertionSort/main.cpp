#include <iostream>

void printArr(int* arr, int sz) {
    for (int i = 0; i < sz; i++) {
        std::cout << arr[i] << " ";
    }
}

void insertionSort(int a[], int sz) {
    int As = 0, k = 0;
    for (int m = 1; m < sz; m++) {
        As = a[m];
        k = m - 1;

        while ((k >= 0) && (a[k] > As)) {
            a[k + 1] = a[k--];
        }
        a[k + 1] = As;
    }
}

int main() {
    const int sz = 5;
    int ar[sz] = { 9, 7, 2, 1, 5 };

    insertionSort(ar, sz);
    printArr(ar, sz);

}