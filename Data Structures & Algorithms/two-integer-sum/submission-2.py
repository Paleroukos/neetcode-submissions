class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d={}
        for i in range(len(nums)):
        
            diff=target-nums[i]
            if diff in d:
                if not(i==d[diff]): return [d[diff],i] 
            d[nums[i]] = i
        