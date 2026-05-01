/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* res = (int *)malloc(2 * sizeof(int));
    *returnSize = 2;

    res[0] = -1;
    res[1] = -1;

    int i = 0;
    for(i = 0; i < numsSize; i++){
        if(nums[i] == target){
            res[0] = i;
            break;
        }
    }

    for(int j = numsSize - 1; j >= i; j--){
        if(nums[j] == target){
            res[1] = j;
            break;
        }
    }
return res;
}
