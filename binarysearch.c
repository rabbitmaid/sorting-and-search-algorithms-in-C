#include <stdio.h>

void printa(int a[], int length) {
    printf("\nList of elements\n");
    for(int i = 0 ; i < length ; i++) {
        printf("a[%d] = %d \n", i, a[i]);
    }
    printf("\n");
}

int binarySearch(int a[], int length, int target) {
    int left = 0;
    int right = length - 1;

     while (left <= right) {
        int mid = (left + right) / 2;

        if (a[mid] == target){
            return mid;                 // found
        }
        else if (a[mid] < target){
            left = mid + 1;             // search right half
        }
        else{
            right = mid - 1;            // search left half
        }
    }

    return -1;   // not found
}

void bubbleSort(int a[], int length) {
    for(int step = 0 ; step < length ; step++) {
        for(int index = 0 ; index < (length - 1 - step) ; index++) {
            if(a[index] > a[index + 1]) {
                int temp = a[index];
                a[index] = a[index + 1];
                a[index + 1] = temp;
            }
        }
    }
}


int main(void) {

    int numbers[] = {7,1,3,9,0,2,4,5,8,6};
    int target = 6;
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // sort the array first.
    bubbleSort(numbers, length);
    printa(numbers, length);

    int result = binarySearch(numbers, length, target);

    if(result != -1) {
        printf("Target found at index: %d", result);
    }else {
        printf("Target not found");
    }
}