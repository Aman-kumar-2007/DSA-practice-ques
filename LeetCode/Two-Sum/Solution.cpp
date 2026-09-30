1int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
2    static int result[2];
3
4    for (int i = 0; i < numsSize; i++) {
5        for (int j = i+1; j < numsSize; j++) {
6            if (nums[i] + nums[j] == target) {
7               result[0]=i;
8               result[1]=j;
9               *returnSize = 2;
10               return result;
11            } 
12        }
13    }
14    *returnSize=0;
15    return NULL;
16}