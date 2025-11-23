#include <stdio.h>

void printa(int a[], int length) {
    printf("\nList of elements\n");
    for(int i = 0 ; i < length ; i++) {
        printf("a[%d] = %d \n", i, a[i]);
    }
    printf("\n");
}

void linearSearch(int a[], int length, int target) {
    for(int index = 0 ; index < length ; index++) {

        if(a[index] == target) {
            printf("Target found at index: %d", index);
        }
    }
}

int main(void) {

    int numbers[] = {7,1,3,9,0,2,4,5,8,6};
    int target = 6;
    int length = sizeof(numbers) / sizeof(numbers[0]);

    linearSearch(numbers, length, target);
}