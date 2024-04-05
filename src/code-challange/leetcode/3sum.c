#include <stdio.h>
#include <stdlib.h>

// functions definition
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes);

int main() {

    // params
    const int numsSize = 6;
    int* nums = malloc(sizeof(int) * numsSize);
    nums[0] = -1;
    nums[1] = 0;
    nums[2] = 1;
    nums[3] = 2;
    nums[4] = -1;
    nums[5] = -4;


    int* returnSize;
    int** returnColumnSizes;

    int** result;
    result = threeSum(nums , numsSize , returnSize , returnColumnSizes);

    return 0;
}


int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int** result;

    for(int i = 0; i < numsSize; i++) {
        printf("%d\n" , nums[i]);
    }

    
    printf("Hello from threesum");
    return result;    
}