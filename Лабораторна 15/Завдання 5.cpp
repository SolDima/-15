/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 8

int main() {
    int arr[size];
    int i, sum = 0;
    srand(time(NULL));                 // �������� ���������� ������
    for (i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        printf("\n%d element oruginalnogo masivu: %d", i + 1, arr[i]);    // ���� ������������ ������
    }
    printf("\nOberneniy masiv: \n");
    for (i = size - 1; i >= 0; i--) {
        printf("\n%d element obernenogo masivu: %d", i + 1, arr[i]);      // ���� ����������

    }

    return 0;
}

*/