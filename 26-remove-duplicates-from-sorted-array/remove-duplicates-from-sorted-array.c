int removeDuplicates(int* nums, int numsSize) {
    int index = 1, i, overwrite = 0;
    for (i = 1; i < numsSize; i++) {
        // checking one by one
        if (nums[i] != nums[i - 1]) {
            overwrite++;
            nums[index] = nums[i]; // i is much like reading eye
            index++; // index would be like overwriting pen
        }
    }
    // adding + for the index 0's element
    return (overwrite + 1);
}