class Solution:
    def search(self, nums: List[int], target: int) -> int:
        nums.sort()
        minVal = 0
        maxVal = len(nums)-1
        while(minVal<=maxVal):
            mid = (minVal + maxVal)//2
            if(nums[mid] == target):
                return mid
            if(nums[mid]>target):
                maxVal = mid-1
            else:
                minVal = mid+1
        return -1