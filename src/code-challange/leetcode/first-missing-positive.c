#include <stdio.h>
#include <stdlib.h>



int firstMissingPositive(int* nums, int numsSize);


int main() {

    int nums[] = { 3 , 4 , -1 , 1 };

    int result = firstMissingPositive(nums , 4);

    printf("result is : %d\n" , result);

    return 0;
}




int firstMissingPositive(int* nums, int numsSize) {

    int min_positive = nums[0];
    int max_positive = nums[0];

    for(int i = 1; i < numsSize; i++) {
        if (nums[i] > 0 && nums[i] < min_positive)
            min_positive = nums[i];
        if (nums[i] > 0 && nums[i] > max_positive)
            max_positive = nums[i];
        // printf("i : %d\n" , nums[i]);
    }

    if (min_positive < 0) 
        min_positive = 1;

    printf("min positive: %d\n" , min_positive);
    printf("max positive: %d\n" , max_positive);

    return min_positive;
}