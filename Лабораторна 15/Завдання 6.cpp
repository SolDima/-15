
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size  4


int main() {
    int arr[size];
    int i = 0;
    int min = 0;
    int max;
    int a = 0;
    int b = 0;
    int vidstan;

    srand(time(NULL));                 // �������� ���������� ������
    for (i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        printf("\n%d element masivu: %d", i + 1, arr[i]);    // ���� ������
    }
    max = arr[0];
    for (i = 0; i < size; i++) {

        if (arr[i] >= max) {
            max = arr[i];          // ���������� ������������� ��������
        }
    }
    min = arr[0];
    for (i = 0; i < size; i++) {

        if (arr[i] < min) {
            min = arr[i];          // ���������� ���������� ��������
        }

    }

    printf("\n\nmax: %d   min: %d   \n", max, min);         // ���� ����������




    return 0;
}

