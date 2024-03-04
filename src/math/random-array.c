
#include <stdio.h>
#include <stdlib.h>




void random_array(int **array , int size) {
    
    *array = malloc((size) * sizeof(int));
    printf("pinter insize of function: %p\n" , *array);
    // for(int i = 0; i < size; i++) {
    //     printf("array[%d]: %d\n" , i , array[i]);
    // }
}
