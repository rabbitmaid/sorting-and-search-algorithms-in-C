#include <stdio.h>

void printa(int a[], int length) {
    printf("\nList of elements\n");
    for(int i = 0 ; i < length ; i++) {
        printf("a[%d] = %d \n", i, a[i]);
    }
    printf("\n");
}

void insertionSort(int a[], int length) {

    for(int i = 0 ; i < length ; i++) {
        int key = a[i];
        int j = i - 1; 

        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}


int main(void) {
    int numbers[] = {7, 1, 3, 9, 0, 2, 4, 5, 8, 6};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    printf("Before sorting...");
    printa(numbers, length);

    printf("After sorting...");
    insertionSort(numbers, length);
    printa(numbers, length);

}