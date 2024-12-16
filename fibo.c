#include<stdio.h>
int main(){
    for (int c = 0, a = 0, b = 1; c<=20; c = a+b)
    {
        printf("%d\n",c);
        a=b;
        b=c;
    }
}