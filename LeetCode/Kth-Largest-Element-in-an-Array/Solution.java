1class Solution {
2  public int findKthLargest(int[] nums, int k) {
3    Arrays.sort(nums);
4    return nums[nums.length-k];
5}
6}