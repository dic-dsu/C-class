#include<stdio.h>
int main(){
    int c = 0,a=0,b=1;
    while(c<=20){
        printf("%d\n",c);
        a=b;
        b=c;
        c=a+b;
    }
}