class Solution:
    def sortArrayByParity(self, nums):
        start, end = 0, len(nums) - 1
        
        while start <= end:
            if nums[start] % 2 == 0:
                start += 1
            else:
                nums[start], nums[end] = nums[end], nums[start]
                end -= 1
        return nums


# other solution
class Solution2:
    def sortArrayByParity(self, nums):
        even = []
        odd = []
        for i in nums:
            if i % 2 == 0:
                even.append(i)
            else:
                odd.append(i)
        
        return even + odd
