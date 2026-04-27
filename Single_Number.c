int singleNumber(int* nums, int numsSize) {
    int table[numsSize];

    for(int i = 0; i < numsSize; i++){
        table[i] = 0;
    }

    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(nums[i] == nums[j]){
                table[i] = 1;
                table[j] = 1;
            }
        }
    }

    for(int i = 0; i < numsSize; i++){
        if(table[i] == 0){
            return nums[i];
        }
    }

    return -1;
}

