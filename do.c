#include <stdio.h>
#include <cs50.h>

int main(){
    int x;

    do{
        x = get_int("Enter the +ve number: ");
    }
    while (x < 0);
    
    printf("%d\n", x);
}
