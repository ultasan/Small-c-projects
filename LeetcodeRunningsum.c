/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int i;
    int prevsum = 0;
    int currsum = 0;
    int* runningSum = malloc(sizeof(int)*numsSize);
    for(i=0;i<numsSize;i++){
        currsum = prevsum+nums[i];
        prevsum = currsum;
        runningSum[i] = currsum;
    }

    *returnSize = numsSize;

    return runningSum;
}
