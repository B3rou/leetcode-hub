int missingNumber(int* nums, int numsSize) {
int i, sum = 0;
    for (i = 0; i < numsSize; i++){
        // gathering all the values in a value, summing them
        sum += nums[i];
    }
return((numsSize*(numsSize + 1)/2) - sum);
// the difference between the values is basically the answer.
}