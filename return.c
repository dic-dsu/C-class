#include <stdio.h>
#include <cs50.h>

int sum(int a, int b){
    return a+b;
}

int main(){
    int x = get_int("Enter the number for a: ");
    int y = get_int("Enter the number for b: ");
    int z = sum(x, y);
    printf("%d\n", z);
}