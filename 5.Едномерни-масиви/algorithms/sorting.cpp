#include <iostream>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort_ascending(int arr[], int lenght) {
    int swapTill = lenght - 1;
    while(swapTill > 0) {
        int lastSwapIndex = 0;
        for(int i = 0; i < swapTill; i++) {
            if(arr[i] > arr[i + 1]) {
                swap(&arr[i], &arr[i + 1]);
                lastSwapIndex = i;
            }
        }
        swapTill = lastSwapIndex;
    }
}

void select_sort_ascending(int arr[], int lenght) {
    for (int i = 0; i < lenght; i++) {
        int min = arr[i];
        int minIndex = i;

        for (int j = i; j < lenght; j++) {
            if(arr[j] < arr[minIndex]) {
                min = arr[j];
                minIndex = j;
            }
        }
        swap(&arr[minIndex], &arr[i]);
    }
}


int main() {
    int arr[] = {51, 9 ,61, 34, 41, 8};
    //swap(&arr[1], &arr[0]);

    //bubble_sort_ascending(arr, 5);
    //std::cout << arr[0] << arr[1] << std::endl;

    select_sort_ascending(arr, 5);
    for(int i = 0; i < 5 ; i++) {
        std::cout << arr[i] << std::endl;
    }
    return 0;
}