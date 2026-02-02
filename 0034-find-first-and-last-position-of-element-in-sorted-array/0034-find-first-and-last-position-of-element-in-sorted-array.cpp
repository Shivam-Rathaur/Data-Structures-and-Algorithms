class Solution { //using the concept of lower & upper bound in an array: O(logn)
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        auto itr1 = lower_bound(nums.begin(), nums.end(), target);
        int lb = itr1 - nums.begin();
        auto itr2 = upper_bound(nums.begin(), nums.end(), target);
        int ub = itr2 - nums.begin();
        if(lb==nums.size() || nums[lb]!=target) return {-1,-1};
        return {lb,ub-1};
    }
};