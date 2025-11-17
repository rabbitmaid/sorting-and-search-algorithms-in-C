#include <stdio.h>


void printa(int a[], int length) {
    printf("\nList of elements\n");
    for(int i = 0 ; i < length ; i++) {
        printf("a[%d] = %d \n", i, a[i]);
    }
    printf("\n");
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
    int length = sizeof(numbers) / sizeof(numbers[0]);

    printf("Before sorting...");
    printa(numbers, length);

    printf("After sorting...");
    bubbleSort(numbers, length);
    printa(numbers, length);

}