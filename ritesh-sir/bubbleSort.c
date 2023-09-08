#include <stdio.h>
#include <assert.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int size, int arr[]){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubbleSort(10, arr);

    for(int i=0; i<9; i++){
        assert(arr[i] <= arr[i+1]);
    }

    printf("Bubble sort successful!\n");

    return 0;
}
