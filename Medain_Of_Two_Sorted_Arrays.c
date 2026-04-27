double findMedianSortedArrays(int* nums1, int nums1Size,
                              int* nums2, int nums2Size) {
    int total = nums1Size + nums2Size;
    int tab[total];

    int i = 0, j = 0, k = 0;

    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] <= nums2[j]) {
            tab[k++] = nums1[i++];
        } else {
            tab[k++] = nums2[j++];
        }
    }

    while (i < nums1Size) {
        tab[k++] = nums1[i++];
    }

    while (j < nums2Size) {
        tab[k++] = nums2[j++];
    }

    if (total % 2 == 1) {
        return tab[total / 2];
    } else {
        return (tab[total / 2 - 1] + tab[total / 2]) / 2.0;
    }
}
