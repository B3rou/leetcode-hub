int missingNumber(int* nums, int numsSize) {
    int i,j,encounter = 0;
    for (i = 1; i <= numsSize; i++){
        // counting one by one and going to check its match
        for (j = 0; j < numsSize; j++){
            // will read all indexes one by one
            if (nums[j] == i){
                encounter = 1;
                break;
            }
            if (encounter == 0 && j == numsSize - 1)
                return (i);
        }
        encounter = 0;
    }
    return(0);
}