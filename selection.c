#include <stdio.h>

void printa(int a[], int length) {
    printf("\nList of elements\n");
    for(int i = 0 ; i < length ; i++) {
        printf("a[%d] = %d \n", i, a[i]);
    }
    printf("\n");
}

void selectionSort(int a[], int length) {
    for(int index = 0 ; index < length - 1 ; index++) {
        int minPos = index; 
        for(int j = index + 1 ; j < length; j++) {
            if(a[j] < a[minPos]) {
                minPos = j;
            }
        }
        if(minPos != index) {
            int temp = a[index];
            a[index] = a[minPos];
            a[minPos] = temp;
        }
    }
    
}

int main(void) {

    int numbers[] = {7,1,3,9,0,2,4,5,8,6};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    printf("Before sorting...");
    printa(numbers, length);

    printf("After sorting...");
    selectionSort(numbers, length);
    printa(numbers, length);

}