#include <stdio.h>

void printa(int a[], int length) {
    printf("\nList of elements\n");
    for(int i = 0 ; i < length ; i++) {
        printf("a[%d] = %d \n", i, a[i]);
    }
    printf("\n");
}


void merge(int arr[], int left, int middle, int right) {
    
    int i, j, k;

    int leftSize = middle - left + 1;
    int rightSize = right - middle;

    // Create temporary arrays
    int L[leftSize], R[rightSize];

    // Copy data to temp arrays L[] and R[]

    for (i = 0; i < leftSize; i++){
        L[i] = arr[left + i];
    }

    for (j = 0; j < rightSize; j++) {
        R[j] = arr[middle + 1 + j];
    }

    // Initial indexes
    i = 0;      // index for L[]
    j = 0;      // index for R[]
    k = left;   // index for arr[] (merged result)

    // Merge the temp arrays back into arr[]
    while (i < leftSize && j < rightSize) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[] (if any)
    while (i < leftSize) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R[] (if any)
    while (j < rightSize) {
        arr[k] = R[j];
        j++;
        k++;
    }

}

void mergeSort(int a[], int left, int right) {

    if(left < right) {

        int middle = left + (right - left) / 2;
        
        mergeSort(a, left, middle);       // sort left half
        mergeSort(a, middle + 1, right);  // sort right half

        merge(a, left, middle, right);    // merge sorted halves
    }

}



int main(void) {
    int numbers[] = {7, 1, 3, 9, 0, 2, 4, 5, 8, 6};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    printf("Before sorting...");
    printa(numbers, length);

    printf("After sorting...");
    mergeSort(numbers, 0, length - 1);
    printa(numbers, length);

}