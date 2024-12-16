#include <stdio.h>

void printArray(double *array, int length);

int main(){
    double list[] = {10, 23, 34, 54, 876};
    int length = sizeof(list)/sizeof(list[0]);
    printArray(list, length);
}

void printArray(double *array, int length){
    for (int i = 0; i < length; i++){
        printf("%lf - %p\n", *(array+i), (array+i));
    }
    printf("\n");
}