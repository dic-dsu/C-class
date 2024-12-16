#include <stdio.h>
#include <string.h>

struct Cars
{
    char model[20];
    char brand[20];
};


int main(int argc, char const *argv[])
{
    struct Cars car1 = {"camero", "chevy"};
    struct Cars car2 = {"mustang", "ford"};
    struct Cars car3 = {"440i", "BMW"};
    
    printf("I like the car model %s from %s than %s from %s\n", car1.model, car1.brand, car3.model, car3.brand);
}
