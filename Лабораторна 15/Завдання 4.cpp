/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 8

int main() {
    int arr[size];
    int i, sum = 0;
    srand(time(NULL));
    for (i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        sum += arr[i];
    }
    printf("Suma elementiv masivu %d", sum);
    return 0;
}
*/