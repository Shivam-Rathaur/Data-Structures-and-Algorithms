class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        left, right, k = 0, len(nums) - 1, len(nums) - 1
        ans = [0 for i in range(len(nums))]
        while left <= right:
            if abs(nums[left]) > nums[right]:
                ans[k] = nums[left] * nums[left]
                left += 1
            else:
                ans[k] = nums[right] * nums[right]
                right -= 1
            k -= 1
        return ans
