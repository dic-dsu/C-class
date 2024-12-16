#include <stdio.h>
#include <cs50.h>

struct OppVar{
  int sum;
  int sub;
  int mul;
  float div;
};

struct OppVar opperation(int a, int b){
    struct OppVar v;
    v.sum = a+b;
    v.sub = a-b;
    v.mul = a*b;
    v.div = (float) a/b;
    return v;
}

int main(){
    int x = get_int("Enter the number for a: ");
    int y = get_int("Enter the number for b: ");
    struct OppVar z = opperation(x, y);
    printf("%d\t%d\t%d\t%.2f\n", z.sum, z.sub, z.mul, z.div);
}