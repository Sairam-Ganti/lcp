#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){    
    int *resArray = (int*)malloc(2*(sizeof(int)));
    for(int i = 0; i<numsSize; i++){
        for(int j =i+1; j<numsSize; j++){
            if(target == nums[i]+nums[j]){
                resArray[0] = i;
                resArray[1] = j;
                *returnSize = 2;
                return resArray; 
            }
        }
    }
    *returnSize = 0;
    return resArray;
}