#include <stdio.h>

int main(){
    int number_list[] = {10, 23, 34, 54, 876.34};

    int length = sizeof(number_list)/sizeof(number_list[0]);

    for (int i = length-1; i >= 0; i--){
        printf("%d\n", number_list[i]);
    }
}