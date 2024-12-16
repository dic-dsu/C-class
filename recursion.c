#include <stdio.h>
#include <cs50.h>

int sum(int a, int b){
    printf("%d\n", a+b);
    int x = get_int("Enter the number for a: ");
    int y = get_int("Enter the number for b: ");
    if(x == -1000)return 0;
    sum(x, y);
}

int main(){
    int x = get_int("Enter the number for a: ");
    int y = get_int("Enter the number for b: ");
    sum(x, y);
}