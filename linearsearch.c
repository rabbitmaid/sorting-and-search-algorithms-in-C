#include <stdio.h>


int linearSearch(int a[], int length, int target) {
    for(int index = 0 ; index < length ; index++) {

        if(a[index] == target) {
            return index;
        }
    }

    return -1;
}

int main(void) {

    int numbers[] = {7,1,3,9,0,2,4,5,8,6};
    int target = 6;
    int length = sizeof(numbers) / sizeof(numbers[0]);

    int result = linearSearch(numbers, length, target);

    if(result != -1) {
        printf("Target found at index: %d", result);
    }else {
        printf("Target not found");
    }
}