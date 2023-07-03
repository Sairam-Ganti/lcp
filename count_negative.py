class Solution:
    def searchForInsert(self, nums: List[int], target: int) -> int:
        nums.sort()
        minVal = 0
        maxVal = len(nums)-1
        while(minVal<=maxVal):
            mid = (minVal + maxVal)//2
            if(nums[mid] == target):
                while(nums[mid]==target):
                    mid -= 1
                return mid+1
            if(nums[mid]>target):
                maxVal = mid-1
            else:
                minVal = mid+1
        return minVal 
    def countNegatives(self, grid: List[List[int]]) -> int:
        target = 0
        count = 0
        for nums in grid:
            pos = self.searchForInsert(nums, target)
            if pos >= len(nums):
                print(pos, nums[-1])
            else: 
                print(pos, nums[pos])
            count = count + pos
        return count
    