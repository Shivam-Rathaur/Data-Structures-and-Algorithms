class Solution { // Similar to Book Allocation Problem
public: // optimal solution (to avoid TLE)
    int count(vector<int> &nums, int low){ //O(n)
        int sum = nums[0], ct = 1;
        for(int i=1 ; i<nums.size() ; i++){
            sum += nums[i];
            if(sum>low){
                sum = nums[i];
                ct++;
            }
        }
        return ct;
    }
    int splitArray(vector<int>& nums, int k) { //O(n*log(s)) where s = sum(arr)
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(),0);
        while(low <= high){
            int mid = low + (high-low)/2;
            if(count(nums,mid)<=k) high = mid-1;
            else low = mid+1;
        }
        return low;
    }
};