int missingNumber(int* nums, int numsSize) {
    //Step 1: Find the sum of all numbers from 0 to n
    //There is a formula:
    //sum = n * (n + 1) / 2
    int sum = numsSize * (numsSize + 1) / 2;
    
    int total = 0;
    for(int i = 0; i < numsSize; i++){
        total += nums[i];
    }
return sum - total;
}
