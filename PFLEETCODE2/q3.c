#include <stdio.h>

/*
 * Removes duplicates from a sorted array nums[] of length n.
 * Returns the number of unique elements k.
 * After the call, the first k elements of nums[] contain the unique values.
 */
int removeDuplicates(int nums[], int n) {
    if (n == 0) return 0;

    int write = 1; // next position to write a unique element

    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[write - 1]) {
            nums[write] = nums[i];
            write++;
        }
    }

    return write; // k = number of unique elements
}

/* Helper to print array showing elements after k as underscores */
void printResult(int nums[], int n, int k) {
    printf("k = %d, nums = [", k);
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(", ");
        if (i < k) printf("%d", nums[i]);
        else printf("_");
    }
    printf("]\n");
}

int main() {
    int nums1[] = {1, 1, 2};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int k1 = removeDuplicates(nums1, n1);
    printResult(nums1, n1, k1); // expected: k = 2, nums = [1, 2, _]

    int nums2[] = {0,0,1,1,1,2,2,3,3,4};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    int k2 = removeDuplicates(nums2, n2);
    printResult(nums2, n2, k2); // expected: k = 5, nums = [0, 1, 2, 3, 4, _, _, _, _, _]

    return 0;
}
