//
// Created by Ashley Eatly on 10/05/2023.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Task3v3.h"

int main(int argc, char* argv[]) {
    int columns = 5;
    int rows = 10;

    // allocate space for the pointers to rows there are 10 rows
    int **arr = malloc(rows * sizeof(int *));
    // then for each row allocate the columns
    for(int i=0; i< rows; i++) {
        arr[i] = malloc( columns * sizeof(int));
    }
    int count = 0;
//    printf("ok \n");
    for (int a=0; a<rows; a++) {
        for (int b=0; b<columns; b++) {
            arr[a][b] = count++;
            arr[a][b] = (a+1)*(b+1);
        }
    }
    printf("ok \n");

    for (int a = 0; a < rows; a++) {
        for (int b = 0; b < columns; b++) {
            printf("%2.2d ", arr[a][b]);
        }
        printf("\n");
    }
    printf("a = %d b = %d a*b = %d arr[a][b] = %d \n",1, 2, 1*2, arr[1][2]);
    printf("a = %d b = %d a*b = %d arr[a][b] = %d \n",4, 9, 9*4, arr[9][4]);
////    arr[0][0] = 5;
////    arr[0][1] = 4;
////    arr[5][3] = 8;
//    printf(" a %d b %d a*b %d arr[a][b] %d\n",1,2,3,*arr[1]);
    for(int i=0; i< columns; i++) {
        free(arr[i]);
    }
    free(arr);
    printf("ok \n");
    return 0;
}