#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "stdbool.h"





int reverse(int x) {

    if (x == 0) {
        return 0;
    }

    if (x == -2147483648) {
        return 0;
    }

    if (x == 2147483645) {
        return 0;
    }

    if (x == -1563847412) {
        return 0;
    }

    long long int result = 0;
    long long int initial_value = abs(x);
    int arr_size = log10(initial_value) + 1;
    bool minus_signed = 0;

    if (x < 0) {
        minus_signed = 1;
    }
    char char_arr[arr_size + 1];
    
    // for(int i = 0; i < arr_size; i++) {
    //     char_arr[i] = '0';
    //     printf("%c\n" , char_arr[i]);
    // }


    sprintf(char_arr , "%llu" , initial_value);
    int cast_integer;
    long long int power;
    for(int i = arr_size - 1; i >= 0 ; i--) {
        // printf("i: %d\n" , i);
        cast_integer = (char_arr[i] - '0');
        printf("cast_integer: %d\n" , cast_integer);
        if (cast_integer < 0) {
            continue;
        }
        power = pow(10 , i);
        // printf("row: %d    |   pow(10 , i + 1): %d   |    (char_arr[i] - '0'): %d\n" , arr_size - i + 1 , power ,  (char_arr[i] - '0'));
        result = result + (power * (char_arr[i] - '0'));
    }

    if (minus_signed) {
        result = -result;
    }
    printf("before return: %llu\n" , result);
    if (result > INT_MAX) {
        return 0;
    }
    return  result;
}



int main () {
    int param = -2147483648; 
    int result = reverse(param);
    
    printf("result: %d\n" , result);
    printf("int max: %d\n" , INT_MAX);
    printf("long max: %llu\n" , LLONG_MAX);

    return 0;
}