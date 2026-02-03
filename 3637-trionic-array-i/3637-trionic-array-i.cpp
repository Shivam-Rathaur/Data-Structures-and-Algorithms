class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();

        if (nums[0] >= nums[1]) { // base case -> check for strictly increasing
            return false;
        }

        int count = 0;
        for (int i = 1; i < n-1; i++) {
            if (nums[i - 1] == nums[i]) {
                return false;
            }
            // check if current index 'i' is peak or valley [ (A-B)*(B-C) ] < 0
            if ((nums[i-1] - nums[i]) * (nums[i] - nums[i+1]) < 0) {
                count++;
            }
        }

        return count == 2 && nums[n-1]!=nums[n-2];

    }
};