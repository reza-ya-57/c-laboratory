#include "stdio.h"
#include "random-array.h"


#define print(x) printf("%d\n" , x)


#define loop(x) (int i = 0; i < x; i++)



int main() {

    struct ArrayInfo array_info;
    array_info = random_array(10);

    for(int i = 0; i < array_info.size; i++) {
        print(array_info.array[i]);
    }

    return 0;
}