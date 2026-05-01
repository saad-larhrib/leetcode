void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int removeElement(int* nums, int numsSize, int val) {
    int k = numsSize - 1;

    for (int i = 0; i <= k; i++) {
        if (nums[i] == val) {
            while (k >= i && nums[k] == val) {
                k--;
            }
            if (i > k) break;

            swap(&nums[i], &nums[k]);
            k--;
        }
    }

    return k + 1;
}
