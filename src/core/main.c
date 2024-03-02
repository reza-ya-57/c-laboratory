#include "stdio.h"

#include "random-array.h"


int main() {

    int age = 10;

    printf("%d" , age);

    int result = random_array(10);

    printf("%d" , result);
    // for(int i = 0; i < sizeof(array); i++) {
    //     printf("%d" , array[i]);
    // }

    return 0;
}