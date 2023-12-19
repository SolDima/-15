/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 8

int main() {
    int arr[size];
    int i;

     srand(time(NULL));

    for (i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        }

    for (i = 1; i < size; i += 2) {
        arr[i] = 0;
        
    }
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    

    return 0;
}
*/