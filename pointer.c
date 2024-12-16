#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 123;
    int *num_p = &num; //n1p = n1a

    int *num_2 = num_p; //n2p = n1a
    
    num = 100; 

    printf("%i\t%i\n", *num_p, *num_2);
}
