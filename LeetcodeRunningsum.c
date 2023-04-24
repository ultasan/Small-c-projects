/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int i;
    int currsum = 0;
    int* runningSum = malloc(sizeof(int)*numsSize);
    for(i=0;i<numsSize;i++){
        currsum = currsum+nums[i];
        runningSum[i] = currsum;
    }
    *returnSize = numsSize;
    return runningSum;
}
