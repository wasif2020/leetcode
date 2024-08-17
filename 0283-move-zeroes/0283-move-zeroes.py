class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
            	# code here
    	count=0
        n=len(nums)
    	for i in range(0,n):
    	    if nums[i] is not 0:
    	        temp=nums[count]
    	        nums[count]=nums[i]
    	        nums[i]=temp
    	        count+=1