
#include <stdio.h>
#include <stdlib.h>



struct ArrayInfo {
    int* array;
    int size;
};

struct ArrayInfo random_array(int size) {
    int SIZE = sizeof(int) * 3;

    int* SIZE_PTR = &SIZE;

    int* array = malloc(SIZE);

    array[0] = 1;
    array[1] = 50;
    array[2] = 100;

    int sizeofarray = SIZE / sizeof(int);

    struct ArrayInfo array_info;
    array_info.array = array;
    array_info.size = sizeofarray;


    // int** tuple = malloc(sizeof(int) * 2);

    // tuple[0] = array;
    // tuple[1] = SIZE_PTR;
    
    return  array_info;
}
