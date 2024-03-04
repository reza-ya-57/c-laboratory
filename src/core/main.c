#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "string.h"

#include "random-array.h"


#define print(x) printf("%d\n" , x)


#define loop(x) (int i = 0; i < x; i++)



int main() {

    int number = -3;
    int result;
    double base , power , power_result;
    base = 5;
    char* str;

    for(int i = 0; i < 20; i++) {
        str[i] = 'T';
    }

    int test = printf("%d" , number);
    printf("%d" , test);
    // sprintf(str, "%d",number);
    // int test = sizeof(str);
    // int counter = 0;
    // for(int i = 0; i < 20; i++) {
    //     if (str[i] != 'T' && str[i] != '-') {
    //         counter++;
    //     }
    // }
    // printf("%d\n" , counter);
    // power = counter - 1;

    // printf("%f\n" , power);

    // power_result = pow(base , power);   

    // result = ((int)power_result) * number;
    // printf("%d" , result);

    // struct ArrayInfo array_info;
    // array_info = random_array(10);

    // for(int i = 0; i < array_info.size; i++) {
    //     print(array_info.array[i]);
    // }

    return 0;
}