class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestSum = nums[0];       
        int currentTotal = nums[0];  
        for (int index = 1; index < nums.size(); index++) {
            currentTotal = max(nums[index], currentTotal + nums[index]);
            bestSum = max(bestSum, currentTotal);
        }
        return bestSum;
    }
};

